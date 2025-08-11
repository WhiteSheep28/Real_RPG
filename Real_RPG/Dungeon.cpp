#include <iostream>

#include "Dungeon.h"
#include "Monster.h"
#include "Item.h"
#include "Inventory.h"

using namespace std;

cDungeon::cDungeon()
{
	m_nRandom_Mob_Spawn = 0;
}

void cDungeon::Monster_Spawn(cCharacter* pCharacter, cItem* pItem, cInventory* pInventory)
{
	while (1)
	{
		cMonster* pMonster = new cMonster;

		Dungeon_Fight(pCharacter, pMonster, pItem, pInventory);

		delete pMonster;

		if (pCharacter->Get_Health() <= 0 || pCharacter->Get_Health() == ' ')
		{
			break;
		}
	}
}

void cDungeon::Dungeon_Fight(cCharacter* pCharacter, cMonster* pMonster, cItem* pItem, cInventory* pInventory)
{
	while (1)
	{

		while (1)
		{
			pCharacter->All_Stats();
			pMonster->All_Stats();

			system("cls");
			cout << "{ Character" << "}{" << " Monster }" << endl;
			cout << "ü�� : " << pCharacter->Get_Health() << "ü�� : " << pMonster->Get_Health() << endl;
			cout << "���ݷ� : " << pCharacter->Get_Strength() << "���ݷ� : " << pMonster->Get_Strength() << endl;
			cout << "���� : " << pCharacter->Get_Defense() << "���� : " << pMonster->Get_Defense() << endl;
			cout << "1. �����ϱ�" << endl;
			cout << "2. �κ��丮" << endl;
			cout << "Space. ���� ������" << endl;

			pCharacter->Select_Num();

			switch (pCharacter->Get_Select_Num())
			{
			case '1': pCharacter->Attack(pMonster, pCharacter); break;
			case '2': pInventory->Inventory_Ui(pCharacter, pItem); break;
			case ' ': break;
			default: continue;
			}

			//�κ��丮�� ���� �ൿ�� ���� ������� �ʰ� ���� ó��
			if (pInventory->Check_Invite_Inventory() == 1)
			{
				pInventory->Reset_Invite_Inventory();

				continue;
			}
			else break;
		}

		if (pCharacter->Get_Select_Num() == ' ') break;

		//���� ü�� �˻�
		pMonster->All_Stats();

		//���� ���� ��
		if (pMonster->Get_Health() <= 0)
		{
			break;
		}

		//���� ����
		pMonster->Attack(pCharacter, pMonster);

		//�÷��̾� ü�� �˻�
		pCharacter->All_Stats();

		//ĳ���� ���� ��
		if (pCharacter->Get_Health() <= 0)
		{
			break;
		}
	}
}

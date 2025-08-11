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
			cout << "체력 : " << pCharacter->Get_Health() << "체력 : " << pMonster->Get_Health() << endl;
			cout << "공격력 : " << pCharacter->Get_Strength() << "공격력 : " << pMonster->Get_Strength() << endl;
			cout << "방어력 : " << pCharacter->Get_Defense() << "방어력 : " << pMonster->Get_Defense() << endl;
			cout << "1. 공격하기" << endl;
			cout << "2. 인벤토리" << endl;
			cout << "Space. 던전 나가기" << endl;

			pCharacter->Select_Num();

			switch (pCharacter->Get_Select_Num())
			{
			case '1': pCharacter->Attack(pMonster, pCharacter); break;
			case '2': pInventory->Inventory_Ui(pCharacter, pItem); break;
			case ' ': break;
			default: continue;
			}

			//인벤토리에 관한 행동은 턴이 진행되지 않게 예외 처리
			if (pInventory->Check_Invite_Inventory() == 1)
			{
				pInventory->Reset_Invite_Inventory();

				continue;
			}
			else break;
		}

		if (pCharacter->Get_Select_Num() == ' ') break;

		//몬스터 체력 검사
		pMonster->All_Stats();

		//몬스터 죽을 시
		if (pMonster->Get_Health() <= 0)
		{
			break;
		}

		//몬스터 공격
		pMonster->Attack(pCharacter, pMonster);

		//플레이어 체력 검사
		pCharacter->All_Stats();

		//캐릭터 죽을 시
		if (pCharacter->Get_Health() <= 0)
		{
			break;
		}
	}
}

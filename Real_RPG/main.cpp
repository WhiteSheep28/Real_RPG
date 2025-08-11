#include <iostream>

#include "Character.h"
#include "Dungeon.h"
#include "Inventory.h"
#include "Item.h"

using namespace std;

void main()
{
	cCharacter* pCharacter = new cCharacter;
	cItem* pItem = new cItem;
	cInventory* pInventory = new cInventory;
	cDungeon* pDungeon = new cDungeon;

	while(1)
	{
		system("cls");
		cout << "{ Text RPG }" << endl;
		cout << "{ 선택지 }" << endl;
		cout << "1. 게임 시작 " << endl;
		cout << "Space. 게임 나가기" << endl;
		
		pCharacter->Select_Num();

		switch (pCharacter->Get_Select_Num())
		{
		case '1' : break;
		case ' ' : exit(1);
		default: continue;
		}
		
		if (pCharacter->Get_Select_Num() == '1') break;
	}

	while (1)
	{
		pCharacter->All_Stats();

		system("cls");
		cout << "{ 스탯 창 }" << endl;
		
		pCharacter->All_Stats_Ui();

		cout << "{ 선택지 } " << endl;
		cout << "1. 던전 들어가기" << endl;
		cout << "Space. 게임 나가기" << endl;

		pCharacter->Select_Num();

		switch (pCharacter->Get_Select_Num())
		{
		case '1' :
		case ' ': exit(1);
		default: continue;
		}
	}
}
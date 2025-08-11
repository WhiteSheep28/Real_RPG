#include <iostream>

#include "Inventory.h"

using namespace std;

cInventory::cInventory()
{

}

void cInventory::Inventory_Ui(cCharacter* pCharacter, cItem* pItem)
{
	int nChange_Num = 0;
	int nInventory_Count = 0;
	Is_Invite_Inventory = 1;

	while (1)
	{
		system("cls");

		nInventory_Count = 0;

		cout << "{ 인벤토리 }" << endl;

		while (nInventory_Count < 10)
		{
			cout << nInventory_Count << ". ";

			pItem->Item_Manage(pCharacter, pCharacter->Get_Inventory(nInventory_Count), 0, 1);

			cout << endl;

			nInventory_Count++;
		}

		cout << "Space. 나가기" << endl;

		pCharacter->Select_Num();

		switch (pCharacter->Get_Select_Num())
		{
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case '10':
		{
			nChange_Num = (int)pCharacter->Get_Select_Num() - 48;

			pItem->Item_Manage(pCharacter, pCharacter->Get_Inventory(nChange_Num), 0, 2);

			break;
		}
		case ' ': break;
		default: continue;
		}

		Clean_Inventory(pCharacter, pItem);

		if (pCharacter->Get_Select_Num() == ' ') break;
	}
}
void cInventory::Clean_Inventory(cCharacter* pCharacter, cItem* pItem)
{
	int nInventory_Count = 0;
	int nTemp_Inventory_Count = 0;

	while (nInventory_Count != 10)
	{
		if (pCharacter->Get_Inventory(nInventory_Count) != 0)
		{
			pItem->Item_Manage(pCharacter, pCharacter->Get_Inventory(nInventory_Count), 0, 4);

			if (pItem->Check_Exists_Item() == 0) pCharacter->Reset_Inventory(nInventory_Count);
		}

		nInventory_Count++;
	}

	nInventory_Count = 0;

	while (nInventory_Count != 10)
	{
		nTemp_Inventory_Count = nInventory_Count;

		while (pCharacter->Get_Inventory(nInventory_Count) != 0)
		{
			if (nInventory_Count == 0)
			{
				break;
			}
			else if (pCharacter->Get_Inventory(nInventory_Count - 1) != 0)
			{
				break;
			}
			else
			{
				pCharacter->Pull_Inventory(nInventory_Count);

				nInventory_Count--;

				if (pCharacter->Get_Inventory(nInventory_Count - 1) != 0)
				{
					break;
				}
			}
		}

		nInventory_Count = nTemp_Inventory_Count;

		nInventory_Count++;
	}
}
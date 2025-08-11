#include <iostream>

#include "Item.h"

cItem::cItem()
{

}

void cItem::Item_Manage(cCharacter* pCharacter, int Item_Num, int Item_Count, int Tool_Select)
{
	switch (Item_Num)
	{
	case 1:
	{
		switch (Tool_Select)
		{
		case 1:
		{
			cout << "회복 물약 : " << pCharacter->Check_Healing_Potion() << "개";

			break;
		}
		case 2:
		{
			pCharacter->Use_Item(Item_Num);

			break;
		}
		case 3:
		{
			pCharacter->Get_Item(Item_Num, Item_Count);

			break;
		}
		case 4:
		{
			if (pCharacter->Check_Healing_Potion() > 0)	Is_Exists_Item = 1;
			else if (pCharacter->Check_Healing_Potion() <= 0) Is_Exists_Item = 0;

			break;
		}
		}

		break;
	}
	//==================================================================================
	case 2:
	{
		switch (Tool_Select)
		{
		case 1:
		{
			cout << "길 가다 주운 빵 : " << pCharacter->Check_Road_PickUp_Bread() << "개";

			break;
		}
		case 2:
		{
			pCharacter->Use_Item(Item_Num);

			break;
		}
		case 3:
		{
			pCharacter->Get_Item(Item_Num, Item_Count);

			break;
		}
		case 4:
		{
			if (pCharacter->Check_Road_PickUp_Bread() > 0)	Is_Exists_Item = 1;
			else if (pCharacter->Check_Road_PickUp_Bread() <= 0) Is_Exists_Item = 0;

			break;
		}
		}

		break;
	}
	//==================================================================================
	case 3:
	{
		switch (Tool_Select)
		{
		case 1:
		{
			cout << "쓰레기 : " << pCharacter->Check_Trash() << "개";

			break;
		}
		case 2:
		{
			pCharacter->Use_Item(Item_Num);

			break;
		}
		case 3:
		{
			pCharacter->Get_Item(Item_Num, Item_Count);

			break;
		}
		case 4:
		{
			if (pCharacter->Check_Trash() > 0)	Is_Exists_Item = 1;
			else if (pCharacter->Check_Trash() <= 0) Is_Exists_Item = 0;

			break;
		}
		}

		break;
	}
	}
}
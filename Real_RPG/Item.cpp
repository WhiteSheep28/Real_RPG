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
			cout << "ȸ�� ���� : " << pCharacter->Check_Healing_Potion() << "��";

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
			cout << "�� ���� �ֿ� �� : " << pCharacter->Check_Road_PickUp_Bread() << "��";

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
			cout << "������ : " << pCharacter->Check_Trash() << "��";

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
#ifndef INVENTORY_MANAGER_H
#define INVENTORY_MANAGER_H

#include <iostream>

using namespace std;

class cInventory_Manager
{
public:
	cInventory_Manager() { ; }
	~cInventory_Manager() { ; }

protected:
	//아이템 인벤토리
	int m_nItem_Inventory[10];

	//장비 인벤토리
	int m_nEquipment_Inventory[10];

	//장비창
	int m_nEquipment_Slot[4];

	//소지 아이템 갯수
	int m_nMy_Healing_Potion; // Item_Num : 1
	int m_nMy_Road_PickUp_Bread; // Item_Num : 2
	int m_nMy_Trash; // Item_Num : 3

private:

};

#endif 
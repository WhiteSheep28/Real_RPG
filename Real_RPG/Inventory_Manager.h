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
	//������ �κ��丮
	int m_nInventory[10];

	//���� ������ ����
	int m_nMy_Healing_Potion; // Item_Num : 1
	int m_nMy_Road_PickUp_Bread; // Item_Num : 2
	int m_nMy_Trash; // Item_Num : 3

private:

};

#endif 
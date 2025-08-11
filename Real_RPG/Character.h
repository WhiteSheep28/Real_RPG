#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>

#include "Game_Manager.h"
#include "Inventory_Manager.h"
#include "Object_Manager.h"

using namespace std;

class cCharacter :
	public cGame_Manager, public cInventory_Manager, public cObject_Manager
{
public:
	cCharacter();
	~cCharacter();

	void Get_Item(int Item_Num, int Item_Count);
	void Use_Item(int Item_Num);
	void Reset_Inventory(int nCount) { m_nInventory[nCount] = 0; }
	void Pull_Inventory(int nCount)
	{
		m_nInventory[nCount - 1] = m_nInventory[nCount];
		m_nInventory[nCount] = 0;
	}

	int Check_Healing_Potion() { return m_nMy_Healing_Potion; }
	int Check_Road_PickUp_Bread() { return m_nMy_Road_PickUp_Bread; }
	int Check_Trash() { return m_nMy_Trash; }
	int Get_Inventory(int nInventory_Num) { return m_nInventory[nInventory_Num]; }

protected:

private:

};

#endif
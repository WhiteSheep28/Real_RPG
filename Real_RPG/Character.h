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
	virtual ~cCharacter();

	int Check_Healing_Potion() { return m_nMy_Healing_Potion; }
	int Check_Road_PickUp_Bread() { return m_nMy_Road_PickUp_Bread; }
	int Check_Trash() { return m_nMy_Trash; }

protected:

private:

};

#endif
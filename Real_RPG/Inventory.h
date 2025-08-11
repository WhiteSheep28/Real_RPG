#ifndef CINVENTORY_H
#define CINVENTORY_H

#include <iostream>

#include "Character.h"
#include "Item.h"

using namespace std;

class cInventory
{
public:
	cInventory();
	virtual ~cInventory();

	virtual void Inventory_Ui(cCharacter* pCharacter, cItem* pItem);
	virtual void Clean_Inventory(cCharacter* pCharacter, cItem* pItem);

	bool Check_Invite_Inventory() { return Is_Invite_Inventory; }
	void Reset_Invite_Inventory() { Is_Invite_Inventory = 0; }

protected:
	int m_nInventory_Count;
	bool Is_Invite_Inventory;

private:

};

#endif

#ifndef CDUNGEON_H
#define CDUNGEON_H

#include <iostream>

#include "Character.h"
#include "Monster.h"
#include "Item.h"
#include "Inventory.h"

using namespace std;

class cDungeon
{
public:
	cDungeon();
	~cDungeon() { ; }

	void Monster_Spawn(cCharacter* pCharacter, cItem* pItem, cInventory* pInventory);

	void Dungeon_Fight(cCharacter* pCharacter, cMonster* pMonster, cItem* pItem, cInventory* pInventory);

protected:
	int m_nRandom_Mob_Spawn;

private:

};

#endif

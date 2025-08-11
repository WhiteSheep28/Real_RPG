#include <iostream>

#include "Character.h"

using namespace std;

cCharacter::cCharacter()
{
	memset(m_nInventory, 0, 11 * sizeof(int));

	m_nBase_Health = 1000;
	m_nBase_Strength = 50;
	m_nBase_Defense = 10;

	m_nSuf_Damage = 0;

	m_nHealth = 0;
	m_nStrength = 0;
	m_nDefense = 0;

	m_nInventory[0] = 1;
	m_nInventory[1] = 2;
	m_nInventory[2] = 3;

	m_nMy_Healing_Potion = 1;
	m_nMy_Road_PickUp_Bread = 10;
	m_nMy_Trash = 5;
}

void cCharacter::Use_Item(int Item_Num)
{
	switch (Item_Num)
	{
	case 1:
	{
		m_nMy_Healing_Potion--;

		m_nSuf_Damage = m_nSuf_Damage - 250;

		if (m_nSuf_Damage <= 0) m_nSuf_Damage = 0;

		break;
	}
	case 2:
	{
		m_nMy_Road_PickUp_Bread--;

		cout << "빵이다!" << endl;

		break;
	}
	case 3:
	{
		m_nMy_Trash--;

		cout << "쓰레기다!" << endl;

		break;
	}
	}
}

void cCharacter::Get_Item(int Item_Num, int Item_Count)
{
	switch (Item_Num)
	{
	case 1: m_nMy_Healing_Potion += Item_Count; break;
	case 2: m_nMy_Road_PickUp_Bread += Item_Count; break;
	case 3:	m_nMy_Trash += Item_Count; break;
	}
}
#include <iostream>

#include "Object_Manager.h"

using namespace std;

void cObject_Manager::All_Stats()
{
	m_nHealth = m_nBase_Health - m_nSuf_Damage;
	m_nStrength = m_nBase_Strength;
	m_nDefense = m_nBase_Defense;
}

void cObject_Manager::All_Stats_Ui()
{
	cout << "체력 : " << m_nHealth << endl;
	cout << "공격력 : " << m_nStrength << endl;
	cout << "방어력 : " << m_nDefense << endl;
}

void cObject_Manager::Attack(cObject_Manager* pGive_Damage_Object, cObject_Manager* pAttack_Object)
{
	pGive_Damage_Object->m_nSuf_Damage = pGive_Damage_Object->m_nSuf_Damage + (pAttack_Object -> m_nStrength - pGive_Damage_Object->m_nDefense);
}
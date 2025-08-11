#include <iostream>

#include "Monster.h"

using namespace std;

cMonster::cMonster()
{
	m_nBase_Health = 1000;
	m_nBase_Strength = 30;
	m_nBase_Defense = 10;

	m_nSuf_Damage = 0;

	m_nHealth = 0;
	m_nStrength = 0;
	m_nDefense = 0;
}
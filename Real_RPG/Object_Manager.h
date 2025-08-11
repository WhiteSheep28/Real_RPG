#ifndef OBJECT_MANAGER_H
#define OBJECT_MANAGER_H

#include <iostream>

using namespace std;

class cObject_Manager
{
public:
	cObject_Manager() { ; }
	~cObject_Manager() { ; }

	void All_Stats();
	void All_Stats_Ui();

	//pGive_Damage_Object : 맞는놈 , pAttack_Obejct : 때리는 놈
	void Attack(cObject_Manager* pGive_Damage_Object, cObject_Manager* pAttack_Object);

	int Get_Health() { return m_nHealth; }

protected:
	//기본 틀이 되는 스탯
	int m_nBase_Health;
	int m_nBase_Strength;
	int m_nBase_Defense;

	//입은 데미지
	int m_nSuf_Damage;

	//추가적인 연산이 진행된 후 최종 스탯 (ex. 버프, 디버프, 장비)
	int m_nHealth;
	int m_nStrength;
	int m_nDefense;

private:

};

#endif
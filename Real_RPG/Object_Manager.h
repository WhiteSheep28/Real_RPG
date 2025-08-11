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

	//pGive_Damage_Object : �´³� , pAttack_Obejct : ������ ��
	void Attack(cObject_Manager* pGive_Damage_Object, cObject_Manager* pAttack_Object);

	int Get_Health() { return m_nHealth; }

protected:
	//�⺻ Ʋ�� �Ǵ� ����
	int m_nBase_Health;
	int m_nBase_Strength;
	int m_nBase_Defense;

	//���� ������
	int m_nSuf_Damage;

	//�߰����� ������ ����� �� ���� ���� (ex. ����, �����, ���)
	int m_nHealth;
	int m_nStrength;
	int m_nDefense;

private:

};

#endif
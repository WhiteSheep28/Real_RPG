#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H

#include <iostream>

using namespace std;

class cGame_Manager
{
public:
	cGame_Manager() { ; }
	~cGame_Manager() { ; }

	void Select_Num() { cin >> m_cSelect; }
	char Get_Select_Num() { return m_cSelect; }

protected:
	//���� ������ �Է�
	static char m_cSelect;

	//���� ���� 
	int m_nBest_Dungeon_Record;
	int m_nDungeon_Record;

private:

};

#endif
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
	//게임 선택지 입력
	static char m_cSelect;

	//던전 점수 
	int m_nBest_Dungeon_Record;
	int m_nDungeon_Record;

private:

};

#endif
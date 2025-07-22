#include "JungleSurvival.h"

game::game(){
	m1.setCoins();
	m1.setHurdles();
	m1.setPlayer();
	m1.setLife();
}

void game::run() {
	m1.hideCursor();
	m1.gotoxy(0, 0);
	m1.printBox();
	p1.printLives();
	p1.printScore();
	bool checkMove = false;
	bool zindaHo = false;
	char w = ' ';
	while (true)
	{
		w=p1.Input();
		checkMove = m1.move(w,p1);
		if (checkMove)
		{
			m1.gotoxy(0, 0);
			m1.printBox();
			p1.printLives();
			p1.printScore();
			Sleep(50);
			zindaHo = p1.checkLives();
			if (zindaHo)
			{
				cout << "Game Over" << endl;
				break;
			}
			
		}
	}
}
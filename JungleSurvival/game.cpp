#include "JungleSurvival.h"
#include "utils.h"

game::game(){
	m1.setCoins();
	m1.setHurdles();
	m1.setPlayer();
	m1.setLife();
}

void game::run() {
	me.displayTitle();
	me.displayMenu();
	system("cls");
	m1.hideCursor();
	m1.gotoxy(0, 0);
	me.printTitleCentered();
	m1.printBox();
	p1.printLives();
	p1.printScore();
	bool checkMove = false;
	bool zindaHo = false;
	bool end = false;
	char w = ' ';
	while (true)
	{
		w=p1.Input();
		checkMove = m1.move(w,p1);
		if (checkMove)
		{
			m1.gotoxy(0, 0);
			me.printTitleCentered();
			m1.printBox();
			p1.printLives();
			p1.printScore();
			Sleep(50);
			zindaHo = p1.checkLives();		// to check if lives=0 game ends
			if (zindaHo)
			{
				me.gameOver();
				cout << "You lose!" << endl;
				break;
			}
			end = m1.gameEnd();		//to check if all the coins are eaten or wtv
			if (end)
			{
				me.gameOver();
				cout << "You won!" << endl;
				break;
			}
		}
	}
}
#include "JungleSurvival.h"

game::game(){
	m1.setCoins();
	m1.setHurdles();
	m1.setLion();
	m1.setPlayer();
	m1.setSword();
}

void game::run() {
	m1.printBox();
	char w = ' ';
	while (true)
	{
		w=p1.Input();
		switch (w)
		{
		case 'w': {

		}
		default:
			break;
		}
	}
}
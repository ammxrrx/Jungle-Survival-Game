#include "JungleSurvival.h"
#include "utils.h"

player::player(){
	lives = 3;
	score = 0;
}

char player:: Input() {
	char w = _getch();
	return w;
}

void player::printScore() {
	setColor(0x04);
	cout << "Score: " << score << endl;
	setColor(0x0F);
}
void player::printLives() {
	setColor(0x04);
	cout << "Lives left: " << lives << endl;
	setColor(0x0F);
}

bool player::checkLives() {
	if (lives==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void player::reduceLife() {
	lives--;
}
void player::increaseLife() {
	lives++;
}
void player::updateScore() {
	score += 5;
}
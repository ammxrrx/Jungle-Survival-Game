#include "JungleSurvival.h"

player::player(){
	lives = 3;
	score = 0;
}

char player:: Input() {
	char w = _getch();
	return w;
}

void player::printScore() {
	cout << "Score: " << score << endl;
}
void player::printLives() {
	cout << "Lives left: " << lives << endl;
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
#include "JungleSurvival.h"

player::player(){}

char player:: Input() {
	char w = _getch();
	return w;
}
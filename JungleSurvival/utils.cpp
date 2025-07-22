#include "utils.h"
#include"JungleSurvival.h"

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
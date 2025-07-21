#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include <ctime>
#include <conio.h>
#include <cstdlib>   
using namespace std;

class map {
public:
    int row_size = 0, col_size = 0;
    char** box;
    int playerX, playerY;
    map(int row = 25, int col = 50);  
    ~map();
    void printBox();
    void setPlayer();
    void setCoins();
    void setHurdles();
    void setLion();
    void setSword();
    bool move(char x);
};

class player {
public:
    player();
    char Input();
};

class game {
public:
    map m1;
    player p1;
    game();
    void run();
};


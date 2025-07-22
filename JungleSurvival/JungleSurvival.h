#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include <ctime>
#include <conio.h>
#include <cstdlib>   
#include <iomanip>
//#include <SFML/Graphics.hpp>
using namespace std;

class menu {
public:
    menu();
    void credits();
    void displayTitle();
    void displayHelp();
    void displayMenu();
    void gameOver();
    void printTitleCentered();
};

class player {
public:
    int score;
    int lives;
    player();
    char Input();
    void printScore();
    void printLives();  
    bool checkLives();
    void reduceLife();
    void increaseLife();
    void updateScore();
};

class map{
public:
    int row_size = 0, col_size = 0;
    char** box;
    int playerX, playerY;
    map(int row = 30, int col = 60);  
    ~map();
    void gotoxy(int x, int y);
    void hideCursor();
    void printBox();
    void setPlayer();
    void setCoins();
    void setHurdles();
    void setLife();
    bool move(char x,player &obj);
    bool gameEnd();
};

class game {
public:
    map m1;
    menu me;
    player p1;
    game();
    void run();
};


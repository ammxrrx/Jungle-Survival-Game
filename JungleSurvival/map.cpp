#include "JungleSurvival.h"

map::map(int row, int col) {
    row_size = row;
    col_size = col;

    box = new char* [row_size];
    for (int i = 0; i < row_size; i++) {
        box[i] = new char[col_size];
    }

    for (int i = 0; i < row_size; i++) {
        for (int j = 0; j < col_size; j++) {
            box[i][j] = ' ';
        }
    }

    for (int i = 0; i < row_size; i++) {
        box[i][0] = '|';
        box[i][col_size - 1] = '|';
    }

    for (int i = 0; i < col_size; i++) {
        box[0][i] = '=';
        box[row_size - 1][i] = '=';
    }
    srand(time(0));
}

map::~map() {
    for (int i = 0; i < row_size; i++) {
        delete[] box[i];
    }
    delete[] box;
}

void map::printBox() {
    for (int i = 0; i < row_size; i++) {
        for (int j = 0; j < col_size; j++) {
            cout << box[i][j];
        }
        cout << endl;
    }
}

void map:: setPlayer(){
    int randomX, randomY;
    do
    {
        randomX = rand()%row_size;
        randomY = rand()%col_size;
    } while (box[randomX][randomY] != ' ');
    box[randomX][randomY] = 'P';
    playerX = randomX;
    playerY = randomY;
}

void map::setCoins() {
    int randomX, randomY;
    for (int i = 0; i < 12; i++)
    {
        do
        {
            randomX = rand() % row_size;
            randomY = rand() % col_size;
        } while (box[randomX][randomY] != ' ');
        box[randomX][randomY] = 'o';
    }
}

void map::setHurdles() {
    int randomX, randomY;
    for (int i = 0; i < 8; i++)
    {
        do
        {
            randomX = rand() % row_size;
            randomY = rand() % col_size;
        } while (box[randomX][randomY] != ' ');
        box[randomX][randomY] = 'H';
    }
}

void map::setLion() {
    int randomX, randomY;
    for (int i = 0; i < 4; i++)
    {
        do
        {
            randomX = rand() % row_size;
            randomY = rand() % col_size;
        } while (box[randomX][randomY] != ' ');
        box[randomX][randomY] = 'H';
    }
}

void map::setSword() {
    int randomX, randomY;
    for (int i = 0; i < 3; i++)
    {
        do
        {
            randomX = rand() % row_size;
            randomY = rand() % col_size;
        } while (box[randomX][randomY] != ' ');
        box[randomX][randomY] = 'H';
    }
}

bool map::move(char x) {
    switch (x)
    {
    case 'w': {
        if (box[playerX-1][playerY]==' ')
        {
            box[playerX - 1][playerY] = 'P';
            return true;
        }
        else {
            return false;
        }
    }
    case 's': {
        if (box[playerX + 1][playerY] == ' ')
        {
            box[playerX + 1][playerY] = 'P';
            return true;
        }
        else {
            return false;
        }
    }
    case 'd': {
        if (box[playerX][playerY+1] == ' ')
        {
            box[playerX][playerY+1] = 'P';
            return true;
        }
        else {
            return false;
        }
    }
    case 'a': {
        if (box[playerX][playerY-1] == ' ')
        {
            box[playerX][playerY-1] = 'P';
            return true;
        }
        else {
            return false;
        }
    }
    default:
        break;
    }
}
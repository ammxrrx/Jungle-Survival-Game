#include "JungleSurvival.h"

//shit aah functions for smoother movement on terminal

void map::gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;  // column
    coord.Y = y;  // row
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void map::hideCursor() {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);
}

// map class functions start from here
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
        box[randomX][randomY] = 'C';
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

void map::setLife() {
    int randomX, randomY;
    for (int i = 0; i < 2; i++)
    {
        do
        {
            randomX = rand() % row_size;
            randomY = rand() % col_size;
        } while (box[randomX][randomY] != ' ');
        box[randomX][randomY] = 'L';
    }
}
bool map::move(char x,player &obj) {
    switch (x) {
    case 'w': case 'W': {
        if (box[playerX - 1][playerY] == ' ') {
            box[playerX][playerY] = ' ';
            box[playerX - 1][playerY] = 'P';
            playerX = playerX - 1;
            return true;
        }
        else if (box[playerX - 1][playerY] == 'H' || box[playerX - 1][playerY] == '|' || box[playerX - 1][playerY] == '=') {
            obj.reduceLife();
            return true;    //returning true for now for all ifs (might need to change later)
        }
        else if (box[playerX - 1][playerY] == 'C') {
            box[playerX][playerY] = ' ';
            box[playerX - 1][playerY] = 'P';
            playerX = playerX - 1;
            obj.updateScore();
            return true;
        }
        else if (box[playerX - 1][playerY] == 'L') {
            box[playerX][playerY] = ' ';
            box[playerX - 1][playerY] = 'P';
            playerX = playerX - 1;
            obj.increaseLife();
            return true;
        }
        break;
    }

    case 's': case 'S': {
        if (box[playerX + 1][playerY] == ' ') {
            box[playerX][playerY] = ' ';
            box[playerX + 1][playerY] = 'P';
            playerX = playerX + 1;
            return true;
        }
        else if (box[playerX + 1][playerY] == 'H' || box[playerX + 1][playerY] == '|' || box[playerX + 1][playerY] == '=') {
            obj.reduceLife();
            return true;    //returning true for now for all ifs (might need to change later)
        }
        else if (box[playerX + 1][playerY] == 'C') {
            box[playerX][playerY] = ' ';
            box[playerX + 1][playerY] = 'P';
            playerX = playerX + 1;
            obj.updateScore();
            return true;
        }
        else if (box[playerX + 1][playerY] == 'L') {
            box[playerX][playerY] = ' ';
            box[playerX + 1][playerY] = 'P';
            playerX = playerX + 1;
            obj.increaseLife();
            return true;
        }
        break;
    }

    case 'd': case 'D': {
        if (box[playerX][playerY + 1] == ' ') {
            box[playerX][playerY] = ' ';
            box[playerX][playerY + 1] = 'P';
            playerY = playerY + 1;
            return true;
        }
        else if (box[playerX][playerY + 1] == 'H' || box[playerX][playerY + 1] == '|' || box[playerX][playerY + 1] == '=') {
            obj.reduceLife();
            return true;    //returning true for now for all ifs (might need to change later)
        }
        else if (box[playerX][playerY + 1] == 'C') {
            box[playerX][playerY] = ' ';
            box[playerX][playerY + 1] = 'P';
            playerY = playerY + 1;
            obj.updateScore();
            return true;
        }
        else if (box[playerX][playerY + 1] == 'L') {
            box[playerX][playerY] = ' ';
            box[playerX][playerY + 1] = 'P';
            playerY = playerY + 1;
            obj.increaseLife();
            return true;
        }
        break;
    }

    case 'a': case 'A': {
        if (box[playerX][playerY - 1] == ' ') {
            box[playerX][playerY] = ' ';
            box[playerX][playerY - 1] = 'P';
            playerY = playerY - 1;
            return true;
        }
        else if (box[playerX][playerY - 1] == 'H' || box[playerX][playerY - 1] == '|' || box[playerX][playerY - 1] == '=') {
            obj.reduceLife();
            return true;    //returning true for now for all ifs (might need to change later)
        }
        else if (box[playerX][playerY - 1] == 'C') {
            box[playerX][playerY] = ' ';
            box[playerX][playerY - 1] = 'P';
            playerY = playerY - 1;
            obj.updateScore();
            return true;
        }
        else if (box[playerX][playerY - 1] == 'L') {
            box[playerX][playerY] = ' ';
            box[playerX][playerY - 1] = 'P';
            playerY = playerY - 1;
            obj.increaseLife();
            return true;
        }
        break;
    }
    }
    return false;
}

//bool map::gameEnd() {
//    for (int i = 0; i < row_size; i++)
//    {
//        for (int j = 0; j < col_size; j++)
//        {
//            if (box[i][j]==)
//            {
//
//            }
//        }
//    }
//}
#include "JungleSurvival.h"
#include "utils.h"

const int ENTER = 13;
const int KEY_DOWN = 80;
const int KEY_UP = 72;
const int KEY_RIGHT = 77;
const int KEY_LEFT = 75;
const int SPACEBAR = 32;
const int ESCAPE = 27;
//test
menu::menu() {}

void menu::printTitleCentered() {
    int consoleWidth = getConsoleWidth();
    string title[] = {
    "Jungle Mein Mangal"
    };
    setColor(0x02);
    for (const string& line : title) {
        int pad = (consoleWidth - line.length()) / 2;
        cout << string(pad, ' ') << line << endl;
    }
    setColor(0x0F); 
}

void menu::credits() {
    system("cls");
    setColor(03);
    cout << "Some useless info:";
    cout << endl << endl;
    cout << "Created by Ammar bec he is vela.\n";
    setColor(0x07); // Resets text colour
    cout << endl;
    setColor(0x0F); // Sets text colour to brilliant white
    cout << "Press any key to return to main menu . . . ";
    setColor(0x07);
    _getch();
}

void menu::displayTitle()
{
    setColor(0x04);
    cout << R"(
 _______                 _           _______       _       
(_______)               | |         (_______)     (_)      
     _ _   _ ____   ____| | _____    _  _  _ _____ _ ____  
 _  | | | | |  _ \ / _  | || ___ |  | ||_|| | ___ | |  _ \ 
| |_| | |_| | | | ( (_| | || ____|  | |   | | ____| | | | |
 \___/|____/|_| |_|\___ |\_)_____)  |_|   |_|_____)_|_| |_|
                  (_____|                                  
                 _______                         _         
                (_______)                       | |        
                 _  _  _ _____ ____   ____ _____| |        
                | ||_|| (____ |  _ \ / _  (____ | |        
                | |   | / ___ | | | ( (_| / ___ | |        
                |_|   |_\_____|_| |_|\___ \_____|\_)       
                                    (_____|                                                                                                                              
)";

    setColor(0x0F);
    cout << endl;
    cout << "Press any key to continue to the main menu... ";
    setColor(0x07);
    _getch();
}

void menu::displayHelp()
{
    system("cls");

    setColor(0x03); // This is how the following text's colour is set. Sets text colour to aqua
    cout << "Here is some information for the game :\n"
        << endl;
    cout << "1. Use 'W', 'A', 'S', 'D' to move.\n"
        << endl;
    cout << "2. Collect coins to win.\n"
        << endl;
    cout << "3. Stay away from walls and hurdles [H]. \n"
        << endl;
    cout << "4. Enjoy playing! :)\n"
        << endl;
    setColor(0x07); // Resets text colour

    setColor(0x0F); // Sets text colour to brilliant white
    cout << "Press any key to return to main menu . . . ";
    setColor(0x07);

    _getch();
}

void menu::displayMenu()
{
    int keyhit = 0;
    int choice = 1;

    while (1)
    {
        system("cls");
        switch (choice)
        {
        case 1:
        {
            setColor(0x05);
            cout << R"(
      _____   _                    _        _____                            
     / ____| | |                  | |      / ____|                           
    | (___   | |_    __ _   _ __  | |_    | |  __    __ _   _ __ ___     ___ 
     \___ \  | __|  / _` | | '__| | __|   | | |_ |  / _` | | '_ ` _ \   / _ \
     ____) | | |_  | (_| | | |    | |_    | |__| | | (_| | | | | | | | |  __/
    |_____/   \__|  \__,_| |_|     \__|    \_____|  \__,_| |_| |_| |_|  \___|


 )" << endl;
            setColor(0x07);
            cout << R"(
     _    _          _         
    | |  | |        | |        
    | |__| |   ___  | |  _ __  
    |  __  |  / _ \ | | | '_ \ 
    | |  | | |  __/ | | | |_) |
    |_|  |_|  \___| |_| | .__/ 
                        | |    
                        |_|    
 )" << endl;


            cout << R"(
     _____              _ _ _       
    /  __ \            | (_) |      
    | /  \/_ __ ___  __| |_| |_ ___ 
    | |   | '__/ _ \/ _` | | __/ __|
    | \__/\ | |  __/ (_| | | |_\__ \
     \____/_|  \___|\__,_|_|\__|___/
                                
                                
)";
            cout << R"(
     ______          _   _        _____                            
    |  ____|        (_) | |      / ____|                           
    | |__    __  __  _  | |_    | |  __    __ _   _ __ ___     ___ 
    |  __|   \ \/ / | | | __|   | | |_ |  / _` | | '_ ` _ \   / _ \
    | |____   >  <  | | | |_    | |__| | | (_| | | | | | | | |  __/
    |______| /_/\_\ |_|  \__|    \_____|  \__,_| |_| |_| |_|  \___|
 )" << endl;
            setColor(0x0F);
            cout << "Navigate using the up and down arrow keys. Press the enter key to select an option . . . ";
            setColor(0x07);
        }
        break;

        case 2:
        {
            cout << R"(
      _____   _                    _        _____                            
     / ____| | |                  | |      / ____|                           
    | (___   | |_    __ _   _ __  | |_    | |  __    __ _   _ __ ___     ___ 
     \___ \  | __|  / _` | | '__| | __|   | | |_ |  / _` | | '_ ` _ \   / _ \
     ____) | | |_  | (_| | | |    | |_    | |__| | | (_| | | | | | | | |  __/
    |_____/   \__|  \__,_| |_|     \__|    \_____|  \__,_| |_| |_| |_|  \___|


 )" << endl;

            setColor(0x0E);
            cout << R"(
     _    _          _         
    | |  | |        | |        
    | |__| |   ___  | |  _ __  
    |  __  |  / _ \ | | | '_ \ 
    | |  | | |  __/ | | | |_) |
    |_|  |_|  \___| |_| | .__/ 
                        | |    
                        |_|    
 )" << endl;
            setColor(0x07);
            cout << R"(
     _____              _ _ _       
    /  __ \            | (_) |      
    | /  \/_ __ ___  __| |_| |_ ___ 
    | |   | '__/ _ \/ _` | | __/ __|
    | \__/\ | |  __/ (_| | | |_\__ \
     \____/_|  \___|\__,_|_|\__|___/
                                
                                
)";

            cout << R"(
     ______          _   _        _____                            
    |  ____|        (_) | |      / ____|                           
    | |__    __  __  _  | |_    | |  __    __ _   _ __ ___     ___ 
    |  __|   \ \/ / | | | __|   | | |_ |  / _` | | '_ ` _ \   / _ \
    | |____   >  <  | | | |_    | |__| | | (_| | | | | | | | |  __/
    |______| /_/\_\ |_|  \__|    \_____|  \__,_| |_| |_| |_|  \___|
 )" << endl;
            setColor(0x0F);
            cout << "Navigate using the up and down arrow keys. Press the enter key to select an option . . . ";
            setColor(0x07);
        }
        break;

        case 3:
        {

            cout << R"(
      _____   _                    _        _____                            
     / ____| | |                  | |      / ____|                           
    | (___   | |_    __ _   _ __  | |_    | |  __    __ _   _ __ ___     ___ 
     \___ \  | __|  / _` | | '__| | __|   | | |_ |  / _` | | '_ ` _ \   / _ \
     ____) | | |_  | (_| | | |    | |_    | |__| | | (_| | | | | | | | |  __/
    |_____/   \__|  \__,_| |_|     \__|    \_____|  \__,_| |_| |_| |_|  \___|


 )" << endl;

            cout << R"(
     _    _          _         
    | |  | |        | |        
    | |__| |   ___  | |  _ __  
    |  __  |  / _ \ | | | '_ \ 
    | |  | | |  __/ | | | |_) |
    |_|  |_|  \___| |_| | .__/ 
                        | |    
                        |_|    
 )" << endl;


            setColor(05);
            cout << R"(
     _____              _ _ _       
    /  __ \            | (_) |      
    | /  \/_ __ ___  __| |_| |_ ___ 
    | |   | '__/ _ \/ _` | | __/ __|
    | \__/\ | |  __/ (_| | | |_\__ \
     \____/_|  \___|\__,_|_|\__|___/
                                
                                
)";
            setColor(0x07);
            cout << R"(
     ______          _   _        _____                            
    |  ____|        (_) | |      / ____|                           
    | |__    __  __  _  | |_    | |  __    __ _   _ __ ___     ___ 
    |  __|   \ \/ / | | | __|   | | |_ |  / _` | | '_ ` _ \   / _ \
    | |____   >  <  | | | |_    | |__| | | (_| | | | | | | | |  __/
    |______| /_/\_\ |_|  \__|    \_____|  \__,_| |_| |_| |_|  \___|
 )" << endl;
            setColor(0x0F);
            cout << "Navigate using the up and down arrow keys. Press the enter key to select an option . . . ";
            setColor(0x07);
        }
        break;
        case 4:
        {
            cout << R"(
      _____   _                    _        _____                            
     / ____| | |                  | |      / ____|                           
    | (___   | |_    __ _   _ __  | |_    | |  __    __ _   _ __ ___     ___ 
     \___ \  | __|  / _` | | '__| | __|   | | |_ |  / _` | | '_ ` _ \   / _ \
     ____) | | |_  | (_| | | |    | |_    | |__| | | (_| | | | | | | | |  __/
    |_____/   \__|  \__,_| |_|     \__|    \_____|  \__,_| |_| |_| |_|  \___|


 )" << endl;
            cout << R"(
     _    _          _         
    | |  | |        | |        
    | |__| |   ___  | |  _ __  
    |  __  |  / _ \ | | | '_ \ 
    | |  | | |  __/ | | | |_) |
    |_|  |_|  \___| |_| | .__/ 
                        | |    
                        |_|    
 )" << endl;


            cout << R"(
     _____              _ _ _       
    /  __ \            | (_) |      
    | /  \/_ __ ___  __| |_| |_ ___ 
    | |   | '__/ _ \/ _` | | __/ __|
    | \__/\ | |  __/ (_| | | |_\__ \
     \____/_|  \___|\__,_|_|\__|___/
                                
                                
)";
            setColor(0x09);
            cout << R"(
     ______          _   _        _____                            
    |  ____|        (_) | |      / ____|                           
    | |__    __  __  _  | |_    | |  __    __ _   _ __ ___     ___ 
    |  __|   \ \/ / | | | __|   | | |_ |  / _` | | '_ ` _ \   / _ \
    | |____   >  <  | | | |_    | |__| | | (_| | | | | | | | |  __/
    |______| /_/\_\ |_|  \__|    \_____|  \__,_| |_| |_| |_|  \___|
 )" << endl;
            setColor(0x07);
            ;
            setColor(0x0F);
            ;
            cout << "Navigate using the up and down arrow keys. Press the enter key to select an option . . . ";
            setColor(0x07);
        }
        }

        keyhit = _getch();

        if ((keyhit == KEY_DOWN) && (choice < 4)) // to validate any change upon pressing the down key when in main menu
        {
            choice++;
        }
        if ((keyhit == KEY_UP) && (choice > 1)) // to validate any change upon pressing the up key when in main menu
        {
            choice--;
        }
        if (keyhit == ENTER)
        {
            switch (choice)
            {
            case 1:
            {
                return;
            }
            break;

            case 2:
            {
                displayHelp();
            }
            break;

            case 3:
            {
                credits();
            }
            break;
            case 4:
            {
                exit(0);
            }
            }
        }
    }
}

void menu::gameOver()
{
    int keyhit = 0;

    system("cls");
    setColor(0x0A);
    cout << R"(
 _______  _______  _______  _______    _______           _______  _______ 
(  ____ \(  ___  )(       )(  ____ \  (  ___  )|\     /|(  ____ \(  ____ )
| (    \/| (   ) || () () || (    \/  | (   ) || )   ( || (    \/| (    )|
| |      | (___) || || || || (__      | |   | || |   | || (__    | (____)|
| | ____ |  ___  || |(_)| ||  __)     | |   | |( (   ) )|  __)   |     __)
| | \_  )| (   ) || |   | || (        | |   | | \ \_/ / | (      | (\ (   
| (___) || )   ( || )   ( || (____/\  | (___) |  \   /  | (____/\| ) \ \__
(_______)|/     \||/     \|(_______/  (_______)   \_/   (_______/|/   \__/
                                                                          
)" << endl;
    setColor(0xF);
    setColor(07);
    Sleep(1000);

    while (_kbhit())

        _getch();

    cout << "Press any key...";

    keyhit = _getch();
    system("cls");
    if (keyhit == ESCAPE)
    {
        exit(0);
    }
    else
    {
        return;
    }
}
#include <iostream> 
using namespace std;
int main() {

    // Title 
    std::cout << "Welcome to Dungeon Crawler!\n";
    std::cout << "    /\n";
    std::cout << "O===[====================-\n";
    std::cout << "    \\";

    // Explain the game to the user, and ask them to pick a hero name 

    std::cout << "\nDungeon crawler is a text based adventure game, where you'll choose your own path. \nAre you ready to explore the dungeons??";

    std::cout << "\nFirst, lets come up with a name for your hero: \n";
    
    // Store the users name 
    char name [20];
    std::cin >> name;

    // Confirm the name selection
    std::cout << "Your hero will be called " << name << "." << "\n Its time to let the adventure begin!\n";
    std::cout << "You approach the entrance to the Dungeon. A sign about the threshold holds a warning to anyone who would enter\n";
    std::cout << "Be wary all ye who cross this doorway. A curse lies here.\n";
    
    int progress;
   

    std::cout << "Press 1 to start a new game, or press 2 to exit";

    if(progress == 1) {
        std::cout << "Let the adventure begin!"; 
    } else if(progress == 2) {
        std::cout << "You're a scaredy bastard.";
    }



    // Store player choices 
    int Choice;
    


    // Present player with first options 
    std::cout << "Ok " << name << " its up to you now. What would you like to do?\n\n";
    std::cout << "1). Run headfirst into the dungeon, throwing aside all caution..\n";
    std::cout << "2). Slowly inch your way into the entrance of the cavernous Dungeon..\n";
    std::cout << "3). Have a panic attack, turn around and exit. No gold is worth this..";

    if(Choice == 1) {

    } else if(Choice == 2) {

    } else if(Choice == 3) {

    } else if(Choice != 1 || 2 || 3) {
        std::cout << "Pick a real option you dummy."; 
    }











}
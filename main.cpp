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
    char enter [5];
    std::cin >> name;

    // Confirm the name selection
    std::cout << "Your hero will be called " << name << "." << "\n Its time to let the adventure begin!\n";

    std::cout << "You approach the entrance to the Dungeon. A sign about the threshold holds a warning to anyone who would enter\n";
    std::cout << "Be wary all ye who cross this doorway. A curse lies here.\n";
    std::cout << "Press enter to continue into the Dungeon\n";
    








}
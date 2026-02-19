#include <iostream>
#include <string>
using std::string;

class Character {
private:
    string charN;
    string guild;
    int level;

public:
    void setName(string charName) {
        charN = charName;
    }
    string getName() {
        return charN;
    }

    void setGuild(string Guild) {
        guild = Guild;
    }
    string getGuild() {
        return guild;
    }

    void setLvl(int LvlXP) {
        if (LvlXP == 30) {
            std::cout << "Congratulations, You can now upgrade to Celestial Level. ";
        } else if (LvlXP >= 31) {
            std::cout << "You are already at Celestial Level. ";
        } else {
            std::cout << "Sorry, you need to be atleast Level 30 to reach Celestial Level. " << std::endl;
        }
        level = LvlXP;
    }
    int getLvl() {
        return level;
    }

    void ViewPlayerProfile() {
        std::cout << "Player Name: " << charN << std::endl;
        std::cout << "Guild Name: " << guild << std::endl;
        std::cout << "Level EXP: " << level << std::endl;
        std::cout << std::endl;
    }
    Character(string Character, string Guild, int LevelEXP) {
        charN = Character ;
        guild = Guild ;
        level = LevelEXP ;
    }
};


int main() {
    Character character1 = Character("Judasama", "stting", 22);
    character1.ViewPlayerProfile();


    character1.setLvl(12);
    std::cout << character1.getName() << " is level " << character1.getLvl();
    std::cout << std::endl;
}

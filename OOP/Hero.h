#pragma once
#include <string>

class Hero
{
private:
	std::string name;
	int health;
	int ExP;

public:
	/*Constructor name*/
	Hero(std::string heroName);

		
		/*Methods*/
		void takeDamage(int amount);
		void heal(int amount);
		void gainExP(int amount);
		void showStats();
};


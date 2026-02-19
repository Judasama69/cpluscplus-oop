#include "Hero.h"
#include <iostream>

Hero::Hero(std::string Hero) {
	name = Hero;
	health = 100;
	ExP = 0;
}

void Hero::takeDamage(int amount) {
    health -= amount;
    if (health < 0) {
        health = 0;
    }

    std::cout << name << " takes " << amount << " damage!" << std::endl;

    if (health == 0) {
        std::cout << "ALERT: " << name << " has been slained." << std::endl;
    }
}

void Hero::heal(int amount) {
    health += amount;

    if (health > 100) {
        health = 100;
    }
    std::cout << name << " heals " << amount << " HP" << std::endl;
}

void Hero::gainExP(int amount) {
	ExP += amount;

	std::cout << name << " earned " << amount << " experience points!" << std::endl;
}

void Hero::showStats() {
	std::cout << "--- " << name << "'s Stats ---" << std::endl;
	std::cout << "HP: " << health << "/100" << std::endl;
	std::cout << "XP: " << ExP << std::endl;
	std::cout << "----------------------" << std::endl;
	std ::cout << std::endl;
}


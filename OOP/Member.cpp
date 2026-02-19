#include "Member.h"
#include <iostream>

Member::Member(std::string name) {
	this->memberName = name;
	this->booksBorrowed = 0;
}

void Member::borrowBook(Book& targetBook) {
	if (targetBook.checkAvailability()) {
		targetBook.setAvailability(false);

		this->booksBorrowed++;
		std::cout << memberName << " borrowed " << targetBook.getTitle() << std::endl;
	} else {
		std::cout << "Sorry, " << targetBook.getTitle() << " is already out." << std::endl;
	}
}

void Member::returnBook(Book& targetBook) {
	if (!targetBook.checkAvailability()) {
		targetBook.setAvailability(true);
		this->booksBorrowed--;
		std::cout << memberName << " returned the book " << targetBook.getTitle() << std::endl;
	}
}

void Member::showMemberStats() {
	std::cout << "Member: " << memberName << " | Books Out: " << booksBorrowed << std::endl;
}

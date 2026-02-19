#include "Book.h"
#include <string>

Book::Book(std::string title, std::string author) {
	this->title = title;
	this->author = author;
	this->isAvailable = true;
}

std::string Book::getTitle() {
	return title;
}

bool Book::checkAvailability() {
	return isAvailable;
}

void Book::setAvailability(bool status) {
	this->isAvailable = status;
}

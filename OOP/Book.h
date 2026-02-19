#pragma once
#include <string>

class Book {
private:
	std::string title;
	std::string author;
	bool isAvailable;

public:
	Book(std::string Title, std::string Author);

	std::string getTitle();

	bool checkAvailability();
	void setAvailability(bool status);
};


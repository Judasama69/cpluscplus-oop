#pragma once
#include <string>
#include "Book.h"

class Member
{
private:
	std::string memberName;
	int booksBorrowed;

public:
	Member(std::string MemberName);

	void borrowBook(Book &targetBook);
	void returnBook(Book &targetBook);

	void showMemberStats();
	
};


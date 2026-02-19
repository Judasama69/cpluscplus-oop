#include "Book.h"
#include "Member.h"

int main() {
	Book book1("James Idol", "Jolan Dayao");
	Member mem1("Ivan");

	mem1.borrowBook(book1); /*Borrows book*/

	mem1.showMemberStats(); /*shows member statistics like books borrowed*/

	mem1.returnBook(book1); /*shows the member returns the book*/

	return 0;
}
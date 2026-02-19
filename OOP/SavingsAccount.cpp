#include <iostream>
#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(std::string name, double balance, double rate)
    : BankAccount(name, balance) {
    interestRate = rate;
}

void SavingsAccount::addInterest() {
    double interest = balance * interestRate;
    balance += interest;
    std::cout << "Interest added: $" << interest << std::endl;
}
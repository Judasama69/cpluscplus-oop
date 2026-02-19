#include <iostream>
#include "BankAccount.h"

BankAccount::BankAccount(std::string name, double initialBalance) {
    ownerName = name;
    balance = (initialBalance >= 0) ? initialBalance : 0;
}

void BankAccount::deposit(double amount) {
    if (amount > 0) balance += amount;
}

void BankAccount::displayStatus() {
    std::cout << "Owner: " << ownerName << " | Balance: $" << balance << std::endl;
}
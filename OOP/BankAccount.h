#pragma once
#include <string>

class BankAccount {
protected:
    std::string ownerName;
    double balance;

public:
    BankAccount(std::string name, double initialBalance);
    void deposit(double amount);
    virtual void displayStatus(); 
};
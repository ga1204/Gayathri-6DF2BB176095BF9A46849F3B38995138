#include <iostream>
#include <string>

class BankAccount {
private:
    int accountNumber;
    std::string accountHolderName;
    double accountBalance;

public:
    // Constructor to initialize the account
    BankAccount(int accNumber, std::string accHolderName, double initialBalance) {
        accountNumber = accNumber;
        accountHolderName = accHolderName;
        accountBalance = initialBalance;
    }

    // Method to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            accountBalance += amount;
            std::cout << "Deposited $" << amount << " into the account. New balance: $" << accountBalance << std::endl;
        } else {
            std::cout << "Invalid deposit amount. Please enter a positive amount." << std::endl;
        }
    }

    // Method to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= accountBalance) {
            accountBalance -= amount;
            std::cout << "Withdrawn $" << amount << " from the account. New balance: $" << accountBalance << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient balance." << std::endl;
        }
    }

    // Method to display the account balance
    void displayBalance() {
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Balance: $" << accountBalance << std::endl;
    }
};

int main() {
    // Create a BankAccount instance
    BankAccount myAccount(12345, "John Doe", 1000.0);

    // Test deposit and withdrawal
    myAccount.displayBalance();
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.displayBalance();

    return 0;
}




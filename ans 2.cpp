#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    double balance;
    std::string ownerName;

public:
    BankAccount(const std::string& accNum, double initialBalance, const std::string& owner)
        : accountNumber(accNum), balance(initialBalance), ownerName(owner) {
    }

    void credit(double amount) {
        balance += amount;
    }

    void debit(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            std::cout << "Insufficient funds. Debit operation failed.\n";
        }
    }

    void displayBalance() {
        std::cout << "Account Number: " << accountNumber << "\n";
        std::cout << "Owner Name: " << ownerName << "\n";
        std::cout << "Balance: $" << balance << "\n";
    }
};

int main() {
    BankAccount myAccount("123456789", 1000.0, "smit");

    myAccount.displayBalance();

    myAccount.credit(500.0);
    myAccount.displayBalance();

    myAccount.debit(200.0);
    myAccount.displayBalance();

    myAccount.debit(1500.0); 
    myAccount.displayBalance();

    return 0;
}


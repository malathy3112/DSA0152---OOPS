#include <iostream>
using namespace std;
class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum, double initBalance) {
        accountNumber = accNum;
        balance = initBalance;
        cout << "Account created with number: " << accountNumber << endl;
    }

    ~BankAccount() {
        cout << "Account with number " << accountNumber << " is being destroyed." << endl;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited " << amount << " into account " << accountNumber << endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn " << amount << " from account " << accountNumber << endl;
        } else {
            cout << "Insufficient funds in account " << accountNumber << endl;
        }
    }

    void displayBalance() {
        cout << "Current balance in account " << accountNumber << ": " << balance << endl;
    }
};

int main() {
    BankAccount acc1("123456789", 1000.0); // Creating account with initial balance of 1000.0
    BankAccount acc2("987654321", 500.0);  // Creating account with initial balance of 500.0

    acc1.deposit(500.0);
    acc1.withdraw(200.0);
    acc1.displayBalance();

    acc2.deposit(100.0);
    acc2.withdraw(600.0);
    acc2.displayBalance();

    return 0;
}

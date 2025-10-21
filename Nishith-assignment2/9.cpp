#include <iostream>
using namespace std;

class BankAccount {
    string name;
    double balance;

public:
    BankAccount(string n, double b) {
        name = n;
        balance = b;
    }

    void deposit(double amt) {
        balance += amt;
    }
    void withdraw(double amt) {
        if (amt <= balance)
            balance -= amt;
        else
            cout << "Not enough balance\n";
    }
    void display() {
        cout << name << " Balance: " << balance << endl; 
    }
};

int main() {
    BankAccount b("Anita", 5000);
    b.deposit(1000);
    b.withdraw(2000);
    b.display();
}

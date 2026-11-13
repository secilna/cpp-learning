#include <iostream>
using namespace std;

class BankAccount {
public:
void setOwner(string n) {
    name = n;
}
void setBalance(double b) {
    if (b >= 0) {balance = b;}
}
void display() {
    cout << name << " has a balance of " << balance;
}

private:
string name;
double balance;

};

int main() {
    BankAccount account1;
    account1.setOwner("Ali");
    account1.setBalance(2500.5);
    account1.display();
    return 0;
}


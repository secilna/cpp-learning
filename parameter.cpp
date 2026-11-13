#include <iostream>
#include <string>
using namespace std;

void greet(string name = "Alp")
{
    cout << "Hi, " << name << "!\n";
}

int main()
{
    greet();
    greet("Ege");
    greet("Selin");
    greet("Nil");
    return 0;
}
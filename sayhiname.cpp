#include <iostream>
#include <string>
using namespace std;

void greet(string name)
{
    cout << "Hi, " << name << "!\n";
}

int main()
{
    greet("Ege");
    greet("Selin");
    greet("Nil");
    return 0;
}
#include <iostream>
using namespace std;

enum Grade
{
    A=4,
    B=3,
    C=2
};

int main()
{
    Grade myGrade = B;
    cout << "My grade is: " << myGrade;
    return 0;
}

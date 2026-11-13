#include <iostream>
using namespace std;

class Date{
    public:
    int day;
    int month;
    int year;
};

int main(){
    Date birthday;

    birthday.day = 01;
    birthday.month = 01;
    birthday.year = 2000;

    cout << birthday.day << "/" << birthday.month << "/"<< birthday.year;

    return 0;
}
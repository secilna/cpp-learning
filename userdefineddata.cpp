#include <iostream>
using namespace std;

struct date
{
    int day;
    int month;
    int year;
};

int main()
{
    date Birthday;
    Birthday.day = 01;
    Birthday.month = 01;
    Birthday.year = 2000;

    cout << "My birthday is: " << Birthday.day << "/" << Birthday.month << "/" << Birthday.year;
    return 0;
}
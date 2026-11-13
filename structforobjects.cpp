#include <iostream>
using namespace std;

struct Student {
    string name;
    string major;
    double gpa;
};

int main()
{
    Student s1;
    Student s2;
    s1.name = "John";
    s2.name = "Jane";
    s1.major = "Computer Science";
    s2.major = "Mathematics";
    s1.gpa = 3.5;
    s2.gpa = 3.8;
    cout << "Student 1: " << s1.name << ", Major: " << s1.major << ", GPA: " << s1.gpa << endl;
    cout << "Student 2: " << s2.name << ", Major: " << s2.major << ", GPA: " << s2.gpa << endl;
    return 0;
}
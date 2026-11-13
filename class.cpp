#include <iostream>
using namespace std;

class Student {
    private:
    int age;
    public:
    void setAge(int x){
        age = x;
    }

    void displayAge(){
        cout << age;
    }
};

int main (){
    Student s1;
    s1.setAge(21);
    s1.displayAge();
    return 0;
}
#include <iostream>
using namespace std;

class Student {
public:
    void setName(string n) {
        name = n;
    }
    void setGpa(double x){
        if (x >= 0 && x <= 4){gpa = x;}
    } 
    void display() {
        cout << name << " has a GPA of " << gpa;
    }

    
private:
string name;
double gpa;
};

int main(){
    Student profile;
    profile.setGpa(3.6);
    profile.setName("Secil");
    profile.display();
    return 0;

}
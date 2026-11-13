#include <iostream>
using namespace std;

class Counter {
    public:
    void setCount(double c){
        count = c;
    }
    void increase(){
        count=count+1;
    }
    void display();

    private:
    double count;

};

void Counter::display() {
        cout << "Counter: " << count << "\n";
    }
    
int main(){
    Counter c1;
    Counter c2;
    c1.setCount(5);
    c2.setCount(1000);

    c1.increase();
    c1.increase();
    c2.increase();

    c1.display();
    c2.display();
    return 0;
}
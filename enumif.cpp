#include <iostream>
using namespace std;

enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    TrafficLight light = RED;
    if (light == RED)
    {
        cout << "Stop!";
    }

    return 0;
}
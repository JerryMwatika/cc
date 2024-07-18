#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void showTrafficLight(string color, int duration) {
    cout << "Traffic Light: " << color << endl;
    this_thread::sleep_for(chrono::seconds(duration));
}

int main() {
    while (true) {
        showTrafficLight("Red", 10);
        showTrafficLight("Green", 10);
        showTrafficLight("Yellow", 3);
    }
    return 0;
}

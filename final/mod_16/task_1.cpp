#include <iostream>
using namespace std;

int main(){
    double speed = 0, delta;
    char buffer[6];

    do {
        cout << "Speed delta: ";
        cin >> delta;

        speed += delta;

        if (speed > 150.0) speed = 150.0;
        if (speed < 0.0) speed = 0.0;
        
        sprintf(buffer, "%.1f", speed);
        cout << "Speed: " << buffer << endl;
    } while (speed > 0.01);
}
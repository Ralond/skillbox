#include <iostream>
using namespace std;

int main(){
double speed = 0, delta;
char buffer[5];

do {
    cout << "Speed delta: ";
    cin >> delta;

    speed += delta;

    if (speed > 150) speed = 150;
    
    sprintf(buffer, "%.1f", speed);
    cout << "Speed: " << buffer << endl;
} while (speed > 0.01);
}
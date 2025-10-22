#include <iostream>
#include <cassert>
using namespace std;

float travelTime(float distance, float speed){
    assert(speed > 0);
    return distance/speed;
}


int main(){
    // cout << "=====Использование assert=====\n";
    float speed;
    float dist;
    while (true){
        cout << "Enter the km/h speed: "; cin >> speed;
        cout << "Enter the distance covered in kilometers: "; cin >> dist;

        cout << "It's been " << travelTime(dist, speed) << " hours.\n";
    }

}
#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int angle;
    float angleRad;
    
    cout << "======Автопилот======\n";
    while (true){
        cout << "Введите угол тангажа в градусах: "; cin >> angle;

        angle = angle % 360;
        if (angle > 180) {
            angle -= 360;
        } else if (angle < -180) angle += 360;

        angleRad = 3.1415 / 180 * (float)angle;
        cout << angleRad << " рад. Проверка. " << (float) angle << " градусов.\n";

        if (fabs(angleRad) > 0.28) {
            cout << "Угол небезопасен!\n";
        } else cout << "Угол безопасен.\n";

        cout << "=============================\n";
    }
}
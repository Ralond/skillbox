#include <iostream>
#include <cmath>

using namespace std;
int main(){
    float point, brightness;
    int leftborder, rightBorder;
    
    cout << "======”бийца Photoshop======\n";
    while (true){
        do {
            cout << "¬ведите €ркость левой границы градиента: "; cin >> leftborder;
            if (leftborder < 0 || leftborder > 255) cout << "ќшибка! яркость должна быть от 0 до 255!\n";
        } while (leftborder < 0 || leftborder > 255);

        do {
            cout << "¬ведите правую границу градиента: "; cin >> rightBorder;
            if (rightBorder < 0 || rightBorder > 255) cout << "ќшибка! яркость должна быть от 0 до 255!\n";
        } while (rightBorder < 0 || rightBorder > 255);

        do {
            cout << "¬ведите положение точки между границами: "; cin >> point;
            if (point < 0 || point > 1) cout << "ќшибка! ѕараметр должен быть от 0 до 1!\n";
        } while (point < 0 || point > 1);

        brightness = (rightBorder - leftborder) * point + leftborder;
        
        cout << "яркость точки: "<< brightness << ".\n";

        cout << "=============================\n";
    }
}
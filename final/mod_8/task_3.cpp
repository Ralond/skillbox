#include <iostream>
#include <cmath>

int main(){
    using namespace std;
    float length, height, width; //Размеры бруска
    int totalNumber;
    cout << "=====Игрушечная история=====";

    while (true){
        cout << "Введите длину, высоту и ширину бруска. \nX: "; cin >> length;
        cout << "Y: "; cin >> height;
        cout << "Z: "; cin >> width;

        cout << "Вывод:\n";

        if (length < 5 || height < 5 || width < 5) {
            cout << "Из этого бруска не получится составить набор кубиков.\n";
        } else {
            length /= 5;
            height /= 5;
            width /= 5;
            totalNumber = (int)length * (int)height * (int)width;
            cout << "Из этого бруска можно изготовить " << totalNumber << " кубиков.\n";
            if ((int)cbrt(totalNumber)>2){
                cout << "Из них можно составить набор из " << pow((int)cbrt(totalNumber),3) << " кубиков.\n";
            } else cout << "С этим бруском составить набор не получится.\n";
        }

    }

}
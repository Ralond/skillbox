#include <iostream>

using namespace std;
int main(){
    float top, bottom , fahrenheit;
    int step, celsius;

    cout << "======Метеостанция======\n";
    while (true){
        cout << "=============================\n";
        cout << "Нижняя граница: "; cin >> bottom;
        cout << "Верхняя граница: "; cin >> top;
        cout << "Шаг: "; cin >> step;

        celsius = (int) bottom;
        if (celsius == 0) {
            fahrenheit = 32.0f;
        } else fahrenheit = (float) celsius * 1.8f + 32.0f;

        for (int i = 0; celsius < top; i++){
            if (i == 0){
                cout << "С\tF\n";
                cout << celsius << "\t" << (int) fahrenheit << "\n";
            } else {
                celsius += step;
                if (celsius > top) {
                    cout << top << "\t" << (int) ((float) top * 1.8f + 32.0f) << "\n";
                } else {
                    fahrenheit = (float) celsius * 1.8f + 32.0f;
                    cout << celsius << "\t" << (int) fahrenheit << "\n";
                }
            }
        }
    }

}
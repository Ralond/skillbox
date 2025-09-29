#include <iostream>

int main(){
    using namespace std;
    cout << "=====Маятник=====\n";
    while (true){
        float fullAmplitude, finalAmplitude;
        int i = 0;
        do {
            cout << "Введите начальную (полную) амплитутду маятника в см: "; cin >> fullAmplitude;
            if (fullAmplitude < 0) cout << "Начальная амплитуда не может быть меньше нуля. \n";
        } while (fullAmplitude < 0);

        do {
            cout << "Введите конечную амплитутду маятника, при которой будет считаться, что он остановился, в см: "; cin >> finalAmplitude;
            if (finalAmplitude > fullAmplitude || finalAmplitude < 0) cout << "Конечная амплитуда не может быть больше начальной или меньше нуля.\n";
        } while (finalAmplitude > fullAmplitude || finalAmplitude < 0);

        while (fullAmplitude > finalAmplitude){
            fullAmplitude -= fullAmplitude * 0.084;
            i++;
        }
        cout << "Перед полным затуханием маятник качнется "<< i << " раз\n";
        cout << "==========\n";
    }

}
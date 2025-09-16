#include <iostream>

using namespace std;
int main() {
    int bacteria, antibiotic, tilda;
    int exterminate = 10, numberMurders;
    bool enough = false;

    cout << "=====Биолаборатория=====\n";
    cout << "Введите количество бактерий: "; cin >> bacteria;
    cout << "Введите количество антибиотика: "; cin >> antibiotic;

    for (int t = 1; !enough; t++){
        bacteria *= 2; //бактерии увеличиваются в два раза
        numberMurders = antibiotic * exterminate; // вычисляем сколько бактерий погибнет в этот раз
        bacteria -= numberMurders; // вычисляем сколько бактерий осталось
        exterminate--; // ослабляем антибиотик

        if (bacteria <= 0) {
            cout << "После " << t << " часа бактерий больше нет!\n";
            enough = true;
        } else cout << "После " << t << " часа бактерий осталось " << bacteria << "\n";

        if (exterminate <= 0) {
            cout << "После " << t << " часа антибиотик перестал действовать\n";
            enough = true;
        }
    }
}
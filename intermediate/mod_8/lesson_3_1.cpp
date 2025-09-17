#include <iostream>

using namespace std;
int main(){
    float kc, gravicap;
    int chatl;

    cout << "======Ку======\n";
    while (true){
        cout << "=============================\n";
        cout << "Сколько у вас чатлов? "; cin >> chatl;

        kc = (float) chatl / 4400;
        cout << "Это будет:  " << kc << " КЦ!\n";

        gravicap = kc / 2;
        cout << "Вы сможете купить " << (int) gravicap << " гравицап!\n";
    }

}
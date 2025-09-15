#include <iostream>
using namespace std;

int main() {
    string ansver;
    int i = 10;

    cout << "======Крепкий орешек======\n";

    for (; i > 0; i--){
        cout << "До взрыва осталось " << i << " шагов. Хотите перерезать провод?\n"; cin >> ansver;

        if (ansver == "да") {
            cout << "Бомба обезврежена! До взрыва оставалось " << i << " шагов.\n";
            break;
        } 
    }
    if (i == 0){
        cout << "Бомба взорвалась!";
    }
}
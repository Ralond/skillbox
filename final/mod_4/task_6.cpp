#include <iostream>
using namespace std;
int main(){
    int quantityBarber;
    int totalMan;
    int haircutNeed;
    int haircutPerDay;
    int deficit;
    cout << "----------Количество барберов----------\n";
    cout << "Сколько в городе мужчин? ";
    cin >> totalMan;
    cout << "Сколько в городе барберов? ";
    cin >> quantityBarber;
    haircutPerDay = quantityBarber*8;
    haircutNeed = totalMan/30;

    if (haircutPerDay<haircutNeed){
        deficit = (haircutNeed - haircutPerDay)/8;
        if ((haircutNeed - haircutPerDay)%8==0){
            cout << "У вас нехватка барберов!\nНужно ещё " << deficit << " барберов";
        } else {
            cout << "У вас нехватка барберов!\nНужно ещё " << (deficit+1) << " барберов";
        }
    }

    if (haircutPerDay>=haircutNeed){
        cout << "Барберов достаточно!";
    }
    
}
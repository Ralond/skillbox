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
        cout << "У вас нехватка барберов!\nНужно ещё " << deficit << " барберов";
    }

    if (haircutPerDay>=haircutNeed){
        cout << "Барберов достаточно!";
    }
    
}
#include <iostream>

using namespace std;
int main(){
    string name[10];
    // cout << "=====Многоквартирный дом=====\n";

    for (int i = 0; i < size(name); i++){
        cout << "Enter the tenant's name: "; cin >> name[i];
    }

    int entered;
    while (true){
        cout << "Enter the apartment number: "; cin >> entered;
        if (entered > 0 && entered <= 10){
                cout << "Tenant's name: " << name[entered-1] << endl;
            } else cout << "Error! There is no such apartment number.\n";
        } 
    }
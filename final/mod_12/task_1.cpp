#include <iostream>

using namespace std;
int main(){
    int number[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    string name[10];

    for (int i = 0; i < size(number); i++){
        cout << "Enter the tenant's name: "; cin >> name[i];
    }

    int entered;
    while (true){
        cout << "Enter the apartment number: "; cin >> entered;
        if (entered > 0 && entered <= 10){
            for (int i = 0; i < size(number); i++){
                if (number[i] == entered){
                    cout << "Tenant's name: " << name[i] << endl;
                    break;
                }                
            }
        } else cout << "Error! There is no such apartment number.\n";
    }

}
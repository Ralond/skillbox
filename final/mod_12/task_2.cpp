#include <iostream>

using namespace std;

int main(){
    // cout << "=====Сортировка=====\n";
    float mass[15] = {};
    cout << "Enter 15 numbers: "; 
    for (int i = 0; i < 15; i++){
        cin >> mass[i];
    }
    //метод Шелла
    int massLen = size(mass);
    int step = massLen/2;

    while (step >=1){
        for (int i = step; i < massLen; i++){
            float temp = mass[i];
            int j = i;
            while (j >= step && mass[j - step] < temp) {
                mass[j] = mass[j - step];
                j -= step;
            }
            mass[j] = temp;
        }
        step /= 2;
    }
    cout << "Sorted array: "; 
    for (int i = 0; i < size(mass); i++) cout << mass[i] << " ";
}
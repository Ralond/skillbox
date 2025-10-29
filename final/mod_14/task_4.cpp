#include <iostream>
#include <vector>
using namespace std;

int main(){
    float matrix[4][4];
    vector<float> vec(4), result(4);

    cout << "Input matrix: ";
    for (int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> matrix[i][j];
        }
    }
    cout << "Input vector: ";
    for(int i = 0; i < 4; i++){
        cin >> vec[i];
    }

    for (int i = 0; i < 4; i++){
        // не понятно зачем нужен аккумулятор из условия, если данные накапливаются в новом векторе
        for(int j = 0; j < 4; j++){
            result[i] += matrix[i][j]*vec[j];
        }
    }
    cout << "Result: ";
    for(int i = 0; i < 4; i++){
        cout << result[i] << " ";
    }

}
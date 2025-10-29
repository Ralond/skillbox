#include <iostream>
using namespace std;

int main(){
    int matrix[5][5];
    

    int number = 0;
    for (int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            matrix[i][abs(j-4*(i%2))] = number;
            number++;
        }
    }
    for (int i = 0; i < 5; i++){
        int count = 0;
        for(int j = 0; j < 5; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
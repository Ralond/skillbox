#include <iostream>
using namespace std;

int main(){
    int matrix[5][5];
    

    int count = 0;
    for (int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            matrix[i][j-count*(1-2*(i%2))] = count;
            count++;
        }
        //1 - 2*i%2 = будет выдавать 1 или -1 в зависимости от четности строки.
        //если строка нечетная - нам надо инициализировать в обратном порядке.
        //           1 - 2 - 3 - 4
        //т.е. будет 8 - 7 - 6 - 5
    }


    for (int i = 0; i < 5; i++){
        int count = 0;
        for(int j = 0; j < 5; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
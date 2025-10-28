#include <iostream>
using namespace std;

bool matrixComparison (int a[4][4], int b[4][4]){
    bool match = true;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (a[i][j] != b[i][j]){
                match = false;
                break;
            }
        }
    }
    return match;
}
int doDiagonal (int a[4][4]){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (j != i){
                a[i][j] = 0;
            }
        }
    }
    return a[4][4];
}

int main(){
    int a[4][4], b[4][4];
    cout << "Input matrix A and B: ";
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cin >> a[i][j] >> b[i][j];
        }
    }

    if (matrixComparison (a, b)){
        doDiagonal(a);
        for (int i = 0; i < 4; i++){
            for (int j = 0; j < 4; j++){
                cout << a[i][j];
            }
        cout << endl;
        }
        cout << "___________\n";
        for (int i = 0; i < 4; i++){
            for (int j = 0; j < 4; j++){
                cout << b[i][j];
            }
        cout << endl;
        }
    } else {
        cout << "The matrices are not equal!" << endl;
    }
}
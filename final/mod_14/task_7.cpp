#include <iostream>
using namespace std;

int main(){
    int bloc[5][5][10];
    int section, height;
    cout << "input matrix of heights: ";
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> height;
            for (int k = 0; k < 10; k++){
                if (height >= k)
                    bloc[i][j][k] = 1;
                else
                    bloc[i][j][k] = 0;
            }
        }
    }

    while (true){
        cout << "input slice: "; cin >> section;
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++){
                cout << bloc[i][j][section] << " ";
            }
            cout << endl;
        }
    }
}

#include <iostream>
using namespace std;

bool makeShip (bool field[10][10]){ //Как-то придумать размещение одного корабля по координатам, чтобы использовать в функции, которая размещает корабли в целом
    int xSt, ySt, xEnd, yEnd;
    bool stack[4]; // стек, чтобы можно было отменять
    for (int i=0; i<10; i++){
        if (i <= 3) {
            cout << "Create a single-deck ship based on the coordinates: "; cin >> xSt >> ySt;
            if (xSt == true || ySt == true) {
                cout << "The cage is occupied!\n";
                (i < 0) ? i = -1 : i--;
            } else field[xSt][ySt] == true;
        }
        else 
        if (i > 3 && i <= 6) {
            cout << "Create a two-deck ship based on the coordinates: "; cin >> xSt >> ySt; 
            cout << " to "; cin >> xEnd >> yEnd;
            for (int i = xSt; i <= xEnd; i++){
                for (int j = ySt; j <= yEnd; j++){
                    if (field[i][j] == true) {
                        cout << "The cage is occupied!\n";
                        i--;
                        break;
                    }
                    else
                    if ((i - j) > 1 || (j - i) > 1) { //доработать, чтобы считались только корабли в строку. Тут формула кривая
                        cout << "Only direct ships!\n";
                        i--;
                        break;
                    }
                }
            }
        }
        else 
        if (i > 6 && i <= 9) {
            cout << "Create a three-deck ship based on the coordinates: "; cin >> xSt >> ySt; 
            cout << " to "; cin >> xEnd >> yEnd;
        }
        else 
        if (i == 10) {
            cout << "Create a four-deck ship based on the coordinates: "; cin >> xSt >> ySt; 
            cout << " to "; cin >> xEnd >> yEnd;
        }
    }
}



int main(){
    bool field_1[10][10]; 
    bool field_2[10][10];

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 0; j++){
            field_1[i][j] = false;
            field_2[i][j] = false;
        }
    }

}
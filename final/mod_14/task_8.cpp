#include <iostream>
#include <vector>
using namespace std;

bool makeShip(bool vec[10][10], int xSt, int ySt, int xEnd = -1, int yEnd = -1){
    if (xEnd < 0 || yEnd < 0){
        if (xSt < 0 || xSt >= 10 || ySt < 0 || ySt >= 10) {
            cout << "Coordinates out of field!\n";
            return false;
        }
        if (vec[xSt][ySt]){
            cout << "The cage is occupied!\n";
            return false;
        } else vec[xSt][ySt] = true;
        return true;
    }
    else
    if (xEnd >= 0 && yEnd >= 0 && xEnd < 10 && yEnd < 10){
        if (xSt < 0 || xSt >= 10 || ySt < 0 || ySt >= 10 || 
            xEnd < 0 || xEnd >= 10 || yEnd < 0 || yEnd >= 10) {
            cout << "Coordinates out of field!\n";
            return false;
        }
        if (xEnd != xSt && yEnd != ySt){
            for (int i = xSt; i < xEnd; i++){
                for (int j = ySt; j < yEnd; j++){
                    if (vec[i][j]){
                        cout << "The cage is occupied!\n";
                        return false;
                    } else vec[i][j] = true;
                }
            }
        } else cout << "Ships should not be placed diagonally!\n";
    }
    return vec[10][10];
}

bool makeShips(bool field[10][10]){
    int xSt, ySt, xEnd, yEnd;

    for (int i=0; i<10; i++){
        if (i <= 3) {
            cout << "Create a single-deck ship based on the coordinates: "; cin >> xSt >> ySt;
            makeShip(field, xSt, ySt);
            if (!makeShip(field, xSt, ySt)){
                cout << "Error!\n";
                (i < 0)? i = -1 : i--;
            }
            for (int i = 0; i < 10; i++){
                for (int j = 0; j < 10; j++){
                    (!field[i][j])? cout << "O": cout << "K";
                    cout << " ";
                }
                cout << endl;
            }
        }
        else 
        if (i > 3 && i <= 6) {
            cout << "Create a two-deck ship based on the coordinates: "; cin >> xSt >> ySt; 
            cout << " to "; cin >> xEnd >> yEnd;
            if (xEnd-xSt != 1 && yEnd-ySt != 1){
                cout << "Error!\n";
                i--;
            } else if (!makeShip(field, xSt, ySt, xEnd, yEnd)){
                    cout << "Error!\n";
                    i--;
                } else makeShip(field, xSt, ySt);
                for (int i = 0; i < 10; i++){
                    for (int j = 0; j < 10; j++){
                        (!field[i][j])? cout << "O": cout << "K";
                        cout << " ";
                    }
                    cout << endl;
                }
                
        }
        else 
        if (i > 6 && i <= 9) {
            cout << "Create a three-deck ship based on the coordinates: "; cin >> xSt >> ySt; 
            cout << " to "; cin >> xEnd >> yEnd;
            if (xEnd-xSt != 2 && yEnd-ySt != 2){
                cout << "Error!\n";
                i--;
            } else if (!makeShip(field, xSt, ySt, xEnd, yEnd)){
                    cout << "Error!\n";
                    i--;
                } else makeShip(field, xSt, ySt);
                for (int i = 0; i < 10; i++){
                    for (int j = 0; j < 10; j++){
                        (!field[i][j])? cout << "O": cout << "K";
                        cout << " ";
                    }
                    cout << endl;
                }
        }
        else 
        if (i == 10) {
            cout << "Create a four-deck ship based on the coordinates: "; cin >> xSt >> ySt; 
            cout << " to "; cin >> xEnd >> yEnd;
            if (xEnd-xSt != 3 && yEnd-ySt != 3){
                cout << "Error!\n";
                i--;
            } else if (!makeShip(field, xSt, ySt, xEnd, yEnd)){
                    cout << "Error!\n";
                    i--;
                } else makeShip(field, xSt, ySt);
                for (int i = 0; i < 10; i++){
                    for (int j = 0; j < 10; j++){
                        (!field[i][j])? cout << "O": cout << "K";
                        cout << " ";
                    }
                    cout << endl;
                }
        }
    }
    return field;
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
    cout << "Make ships for player 1: " << endl;
    makeShips(field_1);

    cout << "Make ships for player 2: " << endl;
    makeShips(field_2);

}
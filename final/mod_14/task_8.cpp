#include <iostream>
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
        if (xSt < 0 || xSt >= 10 || ySt < 0 || ySt >= 10 || 
            xEnd < 0 || xEnd >= 10 || yEnd < 0 || yEnd >= 10) {
            cout << "Coordinates out of field!\n";
            return false;
        }
        if (xEnd != xSt && yEnd != ySt){
            cout << "Ships should not be placed diagonally!\n";
            return false;
        }
        if (xSt == xEnd){ //если корабль горизонтальный
            int startY = min(ySt, yEnd);
            int endY = max(ySt, yEnd);

            for (int j = startY; j <= endY; j++){
                if (vec[xSt][j]){
                    cout << "The cage is occupied!\n";
                    return false;
                }
            }
            for (int j = startY; j <= endY; j++){
                vec[xSt][j] = true;
            }
        } else { //если вертикальный
            int startX = min(xSt, xEnd);
            int endX = max(xSt, xEnd);

            for (int i = startX; i <= endX; i++){
                if (vec[i][ySt]){
                    cout << "The cage is occupied!\n";
                    return false;
                }
            }
            for (int i = startX; i <= endX; i++){
                vec[i][ySt] = true;
            }
        }
    return true;
}

bool makeShips(bool field[10][10]){
    int xSt, ySt, xEnd, yEnd;

    for (int i=0; i<10; i++){
        bool success = false;
        if (i < 4) {
            cout << "Create a single-deck ship based on the coordinates (x,y): ";
            cin >> xSt >> ySt;
            success = makeShip(field, xSt, ySt);
        }
        else 
        if (i < 7) {
            cout << "Create a two-deck ship based on the coordinates (x,y - x,y): "; 
            cin >> xSt >> ySt >> xEnd >> yEnd;
            if ((xSt == xEnd && abs(yEnd-ySt) == 1) || (ySt == yEnd && abs(xEnd-xSt) == 1)){
                success = makeShip(field, xSt, ySt, xEnd, yEnd);
            } else {
                cout << "Wrong ship length! Should be 2 cells.\n";
                success = false;
            }
        }
        else 
        if (i < 9) {
            cout << "Create a three-deck ship based on the coordinates (x,y - x,y): "; 
            cin >> xSt >> ySt >> xEnd >> yEnd;
            if ((xSt == xEnd && abs(yEnd-ySt) == 2) || (ySt == yEnd && abs(xEnd-xSt) == 2)){
                success = makeShip(field, xSt, ySt, xEnd, yEnd);
            } else {
                cout << "Wrong ship length! Should be 3 cells.\n";
                success = false;
            }
        }
        else {
            cout << "Create a four-deck ship based on the coordinates: "; 
            cin >> xSt >> ySt >> xEnd >> yEnd;
            if ((xSt == xEnd && abs(yEnd-ySt) == 3) || (ySt == yEnd && abs(xEnd-xSt) == 3)){
                success = makeShip(field, xSt, ySt, xEnd, yEnd);
            } else {
                cout << "Wrong ship length! Should be 4 cells.\n";
                success = false;
            }
        }
            if (!success) {
                cout << "Fail! Try again." << endl;
                i--;
            } else {
                cout << "Field:\n";
                cout << "  0 1 2 3 4 5 6 7 8 9" << endl;
                for (int i = 0; i < 10; i++){
                    cout << i << " ";
                    for (int j = 0; j < 10; j++){
                        !field[i][j]? cout << "O": cout << "K";
                        cout << " ";
                    }
                    cout << endl;
                }
            }
    }
    return true;
}

void bam(bool field[10][10], int x, int y){
    if (field[x][y]) {
        field[x][y] = false;
        cout << "You've hit the target!\n";
    } else cout << "A miss!\n";
}

int main(){
    bool field_1[10][10] = {false}; 
    bool field_2[10][10] = {false};

    cout << "Make ships for player 1: " << endl;
    makeShips(field_1);

    cout << "Make ships for player 2: " << endl;
    makeShips(field_2);
    
    int player = 1;
    bool play = true;
    while (play){
        int x, y;
        cout << "Player " << player << ", strike at the coordinates: ";
        cin >> x >> y;
        (player == 1)? bam(field_2, x, y) : bam(field_1, x, y);

        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                if ((player == 1)? field_2[i][j] : field_1[i][j]) {
                    break;
                } else play = false;
            }
        }
        if (play == false) {
            cout << "Player " << player << "won!" << endl;
        } else (player == 1)? player = 2 : player = 1;
    }
}
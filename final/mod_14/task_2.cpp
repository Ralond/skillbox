#include <iostream>
using namespace std;

int main(){
    bool field[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            field[i][j] << false;
        }
    }
    char places[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            places[i][j] = ' ';
        }
    }    

    char gamer_name = 'X';
    int x, y, x0Count = 0, x1Count = 0, x2Count = 0, y0Count = 0, y1Count = 0, y2Count = 0;

    for (int move = 0; move < 10; move++){
        cout << gamer_name << ", choose your cell! \n";
        cin >> x >> y;
        places[x][y] = gamer_name;
        field[x][y] = true;
            
        if (field[0][0] == true || field[0][1] == true || field[0][2] == true) x0Count++;
        if (field[1][0] == true || field[1][1] == true || field[1][2] == true) x1Count++;
        if (field[2][0] == true || field[2][1] == true || field[2][2] == true) x2Count++;
        if (field[0][0] == true || field[1][0] == true || field[2][0] == true) y0Count++;
        if (field[0][1] == true || field[1][1] == true || field[2][1] == true) y1Count++;
        if (field[0][2] == true || field[1][2] == true || field[2][2] == true) y2Count++;
        if (y0Count == 3 || y1Count == 3 || y2Count == 3 || x0Count == 3 || x1Count == 3 || x2Count == 3){
            cout << "Player " << gamer_name << " win!" << endl;
            break;
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << places[i][j];
            }
            cout << endl;
        }    
        if (gamer_name == 'X') 
                gamer_name = 'O'; 
        else 
                gamer_name = 'X';
    }
}
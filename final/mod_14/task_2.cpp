#include <iostream>
using namespace std;

int main(){
    bool field[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            field[i][j] = false;
        }
    }
    char places[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            places[i][j] = ' ';
        }
    }    

    char gamer_name = 'X';
    int x, y;
    bool win = false;

    for (int move = 0; move < 9 && !win; move++){
        cout << gamer_name << ", choose your cell: ";

        do {
            cin >> x >> y;
            if (field[x][y]) cout << "The cage is occupied!\n";
            if (x < 0 || y < 0 || x > 2 || y > 2) cout << "Error! Value from 0 to 2.\n";
        } while (x < 0 || y < 0 || x > 2 || y > 2 || field[x][y]);

        places[x][y] = gamer_name;
        field[x][y] = true;

        for (int i = 0; i < 3; i++) {
            int CountH = 0, CountV = 0;
            for (int j = 0; j < 3; j++) {
                //Проверка горизонталей
                if (places[i][j] == 'X') CountH++;
                if (places[i][j] == 'O') CountH--;
                //Проверка вертикалей
                if (places[j][i] == 'X') CountV++;
                if (places[j][i] == 'O') CountV--;
            }
            if (abs(CountH) == 3 || abs(CountV) == 3) win = true;
        }
               
        //Вывод поля на экран:
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << "|" << places[i][j];
            }
            cout << "|" << endl;
        }

        //Определяем результат игры:
        if (win){
            cout << "Player " << gamer_name << " win!" << endl;
        }

        //Меняем игрока:
        if (gamer_name == 'X') 
                gamer_name = 'O'; 
        else 
                gamer_name = 'X';
    }
    //Если ничья:
    if (!win) cout << "It's a draw!\n";
}

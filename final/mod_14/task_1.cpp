#include <iostream>
using namespace std;

int main(){
    int tablewarep[2][6] =  {{3, 3, 3, 3, 3, 3},
                             {3, 3, 3, 3, 3, 3}};

    int plates[2][6] =      {{2, 2, 2, 2, 2, 2},
                             {2, 2, 2, 2, 2, 2}};

    int chairs[2][6] =      {{1, 1, 1, 1, 1, 1},
                             {1, 1, 1, 1, 1, 1}};
    int dessertSpoon[2][6] = {0};
    int dessertPlate[2][6] = {0};

    dessertSpoon[0][0] = 1; //добавили десертную ложку первому Вип
    dessertSpoon[1][0] = 1; //добавили десертную ложку второму Вип
    dessertPlate[0][0] = 1; //добавили десертную тарелку первому Вип
    dessertPlate[1][0] = 1; //добавили десертную тарелку второму Вип

    chairs[0][4] += 1; //добавили стул на пятое место первого ряда
    tablewarep[1][2] -= 1; //украли ложку
    tablewarep[0][0] -= 1; //Вип поделился ложкой
    tablewarep[1][2] += 1; //Ложка Випа
    dessertPlate[0][0] -= 1; //У Випа забрали десертную тарелку

    cout << "Tablewarep:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            cout << tablewarep[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Plates:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            cout << plates[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "Chairs:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            cout << chairs[i][j] << " ";
        }
        cout << endl;
    }    

    cout << "Dessert spoon:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            cout << dessertSpoon[i][j] << " ";
        }
        cout << endl;
    }    

    cout << "Dessert plate:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            cout << dessertPlate[i][j] << " ";
        }
        cout << endl;
    }
}
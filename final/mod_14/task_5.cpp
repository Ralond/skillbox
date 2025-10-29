#include <iostream>
using namespace std;

void bursting(bool (&vecB)[12][12], char (&vecC)[12][12]){
    int xS, yS, xF, yF;

    cout << "Enter the start coordinates: "; 
    do {
        cin >> xS >> yS;
        if (xS > 12 || xS < 0 || yS > 12 || yS < 0) cout << "Try again: ";
    } while (xS > 12 || xS < 0 || yS > 12 || yS < 0);

    cout << "Enter the end coordinates: "; 
    do {
        cin >> xF >> yF;
        if (xF >= 12 || xF < 0 || yF >= 12 || yF < 0) cout << "Try again: ";
    } while (xF >= 12 || xF < 0 || yF >= 12 || yF < 0);

    for (int i = xS; i <= xF; i++){
        for(int j = yS; j <= yF; j++){
            if (vecB[i][j]){
                vecB[i][j] = false;
                vecC[i][j] = 'X';
                cout << "Pop!" << endl;
            }
        }
    }
}

void showWrap(char vec[12][12]){
    for (int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cout << vec[i][j];
        }
        cout << endl;
    }
}

int main(){
    bool totality[12][12];
    char wrap[12][12];
    for (int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            totality[i][j] = true;
            wrap[i][j] = 'O';
        }
    }
    showWrap(wrap);
    bool game = true;
    while (game){
        bursting(totality, wrap);

        int coutPop = 0;
        for (int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                if (!totality[i][j]) {
                    coutPop += 1;
                }
            }
        }
        showWrap(wrap);
        if (coutPop >= 144){
            cout << "Game over!" << endl;
            game = false;
        }
    }

}
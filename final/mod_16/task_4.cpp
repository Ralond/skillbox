#include <iostream>
#include <sstream>
using namespace std;

enum note
{
    DO = 1,
    RE = 2,
    MI = 4,
    FA = 8,
    SOL = 16,
    LA = 32,
    SI = 64
};

int main(){
    string enter;

    while(1){
        cout << "Enter a chord from 1 to 7: ";
        cin >> enter;
        if (enter == "exit") break;

        stringstream entered(enter);

        unsigned char chord = 0;
        char index;

        for (int i = 0; i < enter.size(); i++){
            entered.get(index);
            int shift = index - '0';
            if (shift >= 1 && shift <= 7){
                unsigned char notesMask = 1 << (shift-1);
                chord |= notesMask;
            }
        }
        if (chord & DO){
                cout << "DO";
            }
        if (chord & RE){
                cout << "RE";
            }
        if (chord & MI){
                cout << "MI";
            }
        if (chord & FA){
                cout << "FA";
            }
        if (chord & SOL){
                cout << "SOL";
            }
        if (chord & LA){
                cout << "LA";
            }
        if (chord & SI){
                cout << "SI";
            }
        cout << endl;
    }
}
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int showcasSize = 0;
    cout << "How many robots are in vetrina? "; cin >> showcasSize;

    vector<int> allRobots(showcasSize);

    for (int i = 0; i < showcasSize; i++){
        cout << "Enter the robot number " << i+1 << ": ";
        cin >> allRobots[i];
    }
    
    int buyer;
    do {
        cout << "How many robots do you want to buy? "; cin >> buyer;
        if (buyer > showcasSize) cout << "Enter a number up to " << showcasSize << endl;
    } while (buyer > showcasSize);
    bool find = false;
    for (int i = 0; i < buyer; i++){
        int buyIndex;
        cout << "Enter the robot's index for purchase: "; cin >> buyIndex;
        if (buyIndex >= allRobots.size()){
            cout << "There is no such index\n";
            i--;
        } else {
            for (int j = 0; j < allRobots.size(); j++){
                if (buyIndex == j && buyIndex != allRobots.size()-1){
                    allRobots[j] = allRobots[j+1];
                    find = true;
                } else if (buyIndex == allRobots.size()-1) {
                    break;
                }

                if (find && j != allRobots.size()-1){
                    allRobots[j] = allRobots[j+1];
                }
            }
            allRobots.resize(allRobots.size()-1);
            cout << "They took the robot with the index " << buyIndex << "\nThere are robots left in the showcase {";
            for (int r = 0; r < allRobots.size()-1; r++) cout << allRobots[r] << ", ";
            cout << allRobots[allRobots.size()-1] << "}.\n";
        }

    }


}
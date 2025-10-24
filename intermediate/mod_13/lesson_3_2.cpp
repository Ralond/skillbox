#include <iostream>
#include <vector>
using namespace std;

vector<int> buyRobots(vector<int> vec, int buyIndex){
    bool find = false;
    for (int i = 0; i < vec.size(); i++){
        if (buyIndex == i && buyIndex != vec.size()-1){
            vec[i] = vec[i+1];
            find = true;
        } else if (buyIndex == vec.size()-1) {
            break;
        }

        if (find && i != vec.size()-1){
            vec[i] = vec[i+1];
        }
    }
    vec.resize(vec.size()-1);
    return vec;
}

vector<int> addRobots(vector<int> vec, int num){
    vec.resize(vec.size()+1);
    vec[vec.size()-1] = num;
    return vec;
}

int main(){
    int showcasSize = 0;
    cout << "How many robots are in vetrina? "; cin >> showcasSize;

    vector<int> allRobots(showcasSize);

    for (int i = 0; i < showcasSize; i++){
        cout << "Enter the robot number " << i+1 << ": ";
        cin >> allRobots[i];
    }
    vector<int> request(2);

    while (true){
        cout << "Enter a request: ";
        for (int i=0; i < request.size(); i++) cin >> request[i];
        if (request[0] == 1){
            allRobots = addRobots(allRobots, request[1]);
        } else if (request[0] == 2){
            allRobots = buyRobots(allRobots, request[1]);
        }

        cout << "Total robots: {";
        for (int i = 0; i < allRobots.size()-1; i++) cout << allRobots[i] << ", ";
        cout << allRobots[allRobots.size()-1] << "}.\n";
    }
}
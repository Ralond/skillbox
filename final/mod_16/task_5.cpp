#include <iostream>
#include <sstream>
using namespace std;

enum automats{
    allPower = 1,
    sockets = 2,
    lightIn = 4,
    lightOut = 8,
    heating = 16,
    hotWater = 32,
    conditioner = 64
};

void printTime (int hours, int min){
    if (hours < 10) cout << "0";
    cout << hours << ":";
    if (min < 10) cout << "0";
    cout << min << endl;
}

void chekAutomats(unsigned char now, unsigned char old){
    //проверка предыдущего состояния, если состояние изменено - вывод сообщения.
    unsigned char changes = now ^ old;
    const char* names[] = {"All power", "Sockets", "Light inside", "Light outside", "Heating", "Hot water", "Conditioner"};
    int mask[] = {allPower, sockets, lightIn, lightOut, heating, hotWater, conditioner};
    if (changes) cout << "----\n";
    for (int i =0; i < 7; i++){
        if (changes & mask[i]){
            cout << names[i] << ((now & mask[i])? " On": " Off") << endl;
        }
    }
}

int main(){
    int tempOutside, tempIn, lightTemp = 5000, hours = 0, min = 0;
    string mov, lights;
    unsigned char switches_state = 0, switches_buff = 0;

    for (int i = 0; i < 48; i++){ //симуляция двух суток
        cout << "Time: ";
        printTime(hours, min);
        string enter;
        cout << "Temperature inside, temperature outside, movement, lights: \n";
        getline(cin, enter);
        stringstream buffer(enter);
        buffer >> tempIn >> tempOutside >> mov >> lights;

        if (tempOutside < 0){
            switches_state |= hotWater;
        } else if (tempOutside > 5){
            switches_state &= ~hotWater;
        }
        if ((hours > 16 || hours < 5) && mov == "yes"){
            switches_state |= lightOut;
        } else if (mov == "no" || hours >= 5 && hours <= 16){
            switches_state &= ~lightOut;
        }
        if (tempIn < 22){
            switches_state |= heating;
        } else if (tempIn >= 25){
            switches_state &= ~heating;
        }
        if (tempIn >= 30){
            switches_state |= conditioner;
        } else if (tempIn <= 25){
            switches_state &= ~conditioner;
        }
        if (hours > 17 && hours <= 20){
            lightTemp -= 575;
        } else if (hours == 0){
            lightTemp = 5000;
        }
        if (lights == "on"){
            switches_state |= lightIn;
        } else {
            switches_state &= ~lightIn;
        }

        chekAutomats(switches_state, switches_buff);
        if (switches_state & lightIn){
            cout << "Color temperature: " << lightTemp << "K" << endl;
        }
        cout << "------------------------------------\n";
        switches_buff = switches_state;

        hours++;
        if (hours > 23) hours = 0;
    }
}
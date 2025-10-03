#include <iostream>

int main(){
    using namespace std;
    // cout << "=====Время в пути=====\n";

    string timeArrival, timeDeparture;
    int timeAH, timeAM, timeDH, timeDM, arrival, departure;
    
    while (true){
        do {
            cout << "Enter the departure time (HH:MM): "; cin >> timeDeparture;
            if (timeDeparture.length() !=5 || timeDeparture[2] != ':' || timeDeparture[0] < '0' || timeDeparture[0] > '2' 
                    || timeDeparture[1] < '0' || timeDeparture[1] > '9' || timeDeparture[3] < '0' || timeDeparture[3] > '6' 
                    || timeDeparture[4] < '0' || timeDeparture[4] > '9' ){
                        cout << "Error!\n";
                    } else {
                        timeDH = 10 * (timeDeparture[0] - '0') + (timeDeparture[1] - '0');
                        timeDM = 10 * (timeDeparture[3] - '0') + (timeDeparture[4] - '0');
                        if (timeDH > 23 || timeDM > 59) {
                            cout << "Error!\n";
                        } else departure = 60 * timeDH + timeDM;
                    }
        } while (timeDH > 23 || timeDM > 59);

        do {                
        cout << "Enter the arrival time (HH:MM): "; cin >> timeArrival;
        if (timeArrival.length() !=5 || timeArrival[2] != ':' || timeArrival[0] < '0' || timeArrival[0] > '2' 
                || timeArrival[1] < '0' || timeArrival[1] > '9' || timeArrival[3] < '0' || timeArrival[3] > '6' 
                || timeArrival[4] < '0' || timeArrival[4] > '9' ){
                    cout << "Error!\n";
                } else {
                    timeAH = 10 * (timeArrival[0] - '0') + (timeArrival[1] - '0');
                    timeAM = 10 * (timeArrival[3] - '0') + (timeArrival[4] - '0');
                    if (timeAH > 23 || timeAM > 59) {
                        cout << "Error!\n";
                    } else arrival = 60 * timeAH + timeAM;
                }
        } while (timeAH > 23 || timeAM > 59);

        if (arrival > departure){
            cout << "The trip was: " << (arrival - departure)/60 << " hours and " << (arrival - departure)%60 << " minutes\n";
        } else {
            if ((arrival - departure)%60 != 0) {
                cout << "The trip was: " << (arrival - departure)/60 + 23 << " hours and " 
                        << (arrival - departure)%60 + 60 << " minutes\n";
            } else cout << "The trip was: " << (arrival - departure)/60 + 24 << " hours and 0 minutes\n";
        }
    }
}
#include <iostream>
#include <cmath>

int main(){
    using namespace std;
    cout << "=====Кенийский бегун=====\n";

    int distance;
    float sec, temp;

    while (true){
        cout << "Ввод:\n";
        cout << "Привет, Сэм! Сколько километров ты сегодня пробежал? "; cin >> distance;
        for (int i=0; i < distance; i++){
            cout << "Какой у тебя был темп на километре " << i+1 << "? "; cin >> sec;
            temp += sec;
        }
        temp = round(temp/distance);
        sec = (int)temp % 60;
        temp /= 60;

        cout << "Вывод:\n";
        cout << "Твой средний темп за тренировку: " << (int)temp << " минуты и " << sec << " секунд.\n";
        cout << "==========\n";




    }


}
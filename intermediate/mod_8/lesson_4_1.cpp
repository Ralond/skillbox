#include <iostream>
#include <cmath>

using namespace std;
int main(){
    float horseX, horseY;
    float nextX, nextY;

    cout << "======Ход конём======\n";
    while (true){
        cout << "=============================\n";
        cout << "Введите местоположение коня: "; cin >> horseX >> horseY;
        cout << "Введите местоположение точки на доске: "; cin >> nextX >> nextY;

        while (nextY <= 0 || horseY <= 0 || nextY >= 1 || horseY >= 1) {
            cout << "Ошибка! Введите местоположение фигуры в процентах: "; cin >> nextX >> nextX;
        }

        horseX *= 10;
        horseY *= 10;
        nextX *= 10;
        nextY *= 10;
        
        cout << "Конь в клетке (" << (int) horseX <<", " << (int) horseY << "). ";
        cout << "Точка в клетке (" << (int) nextX <<", " << (int) nextY << ").\n";

        int dX = abs((int)horseX - (int)nextX);
        int dY = abs((int)horseY - (int)nextY);
        
        if ((dX == 2 && dY == 1) || (dX == 1 && dY == 2)){
            cout << "Да, конь может ходить в эту точку.\n";
        } else cout << "Нет, конь не может ходить в эту точку.\n";
    }
}
#include <iostream>

using namespace std;
int main() {
    int width, height;

    cout << "=====Рамка=====\n";
    cout << "Введите ширину и высоту рамки: "; cin >> width >> height;
    for (int x = 0; x != height; x++){
        for (int y = 0; y != width; y++){
            if (y == 0 || y == width-1) {
                cout << "|";
            } else if (y > 0 && y < width-1) {
                if (x == 0 || x == height-1) {
                    cout << "-";
                } else cout << " ";
            }
        }
        cout << "\n";
    }
}
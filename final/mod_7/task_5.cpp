#include <iostream>
using namespace std;

int main() {

  cout << "===== оординатные оси=====\n";

  for (int x = 0; x <= 20; x++) {
    for (int y = 0; y <= 50; y++) {
      if (x == 10 && y == 25)
       cout << "+"; // в примере уже было перекрестье
      if (x == 0 && y == 25)
        cout << "^"; // добавил стрелку вверх
      if (x == 10 && y == 50)
        cout << ">"; // добавил стрелку вправо
     if (x == 10 && y < 50)
        cout << "-";
      else if (y == 25 && x > 0)
        cout << "|";
      else
        cout << " ";
    }
    cout << "\n";
  }
}
#include <iostream>
using namespace std;

int main() {

  cout << "=====������������ ���=====\n";

  for (int x = 0; x <= 20; x++) {
    for (int y = 0; y <= 50; y++) {
      if (x == 10 && y == 25)
       cout << "+"; // � ������� ��� ���� �����������
      if (x == 0 && y == 25)
        cout << "^"; // ������� ������� �����
      if (x == 10 && y == 50)
        cout << ">"; // ������� ������� ������
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
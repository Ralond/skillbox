#include <iostream>

int main() {
    int beginHeight;
    int nightFade;
    int dailyGrowth;
    int result;

    std::cout << "������� ������ ������� ��� ������� � ����� (� �����������): ";
    std::cin >> beginHeight;

    std::cout << "�� ������� ��. ������ ��������� ���? ";
    std::cin >> dailyGrowth;

    std::cout << "������� ��. ������� ������� ��������? ";
    std::cin >> nightFade;

    result = beginHeight + (dailyGrowth-nightFade)*2 + dailyGrowth/2;

    
    std::cout << "�� ������ ���� �� ������� ��������� " << result << " �����������.";
}

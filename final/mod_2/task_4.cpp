#include <iostream>



int main() {
	setlocale(LC_ALL, "RU");

	int totalPrise = 4000000;
	int entrancesCount = 2;
	int apartmentsCount = 20;
	int separatePrise = totalPrise / (entrancesCount * apartmentsCount);

	std::cout << "������������ ��� � ������������ ����������!\n";
	std::cout << "-------------------------------------------\n";

	std::cout << "������� �����, ��������� � ���������: " << totalPrise << "\n";
	std::cout << "������� ��������� � ����� ����? " << entrancesCount << "\n";
	std::cout << "������� ������� � ������ ��������? " << apartmentsCount << "\n";
	std::cout << "----�������-----\n";
	
	std::cout << "������ �������� ������ ������� �� " << separatePrise << " ���.\n";

}
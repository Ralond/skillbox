#include <iostream>



int main() {

	int prise;
	int priseDelivery;
	int sale;
	int totalPrise;

	std::cout << "��������� ������� ������������� ����\n";
	std::cout << "------------------------------------\n";

	std::cout << "������� ��������� ������: ";
	std::cin >> prise;

	std::cout << "������� ��������� ��������: ";
	std::cin >> priseDelivery;

	std::cout << "������� ������: ";
	std::cin >> sale;
	
	totalPrise = prise + priseDelivery - sale;
	std::cout << "����� ����� � ������: " << totalPrise << "\n";

}
#include <iostream>



int main() {

	int prise;
	int priseDelivery;
	int sale;
	int totalPrise;

	std::cout << "��������� ������� ������������� ����\n";
	std::cout << "------------------------------------\n";
	//� ������� ���� �������, ��� ����� ����������� ���� ������ - ������� ���������� �������� ���������� ����� �� ����������
	prise = 10;
	std::cout << "������� ��������� ������: " << prise << "\n";

	priseDelivery = 5;
	std::cout << "������� ��������� ��������: " << priseDelivery << "\n";

	sale = 2;
	std::cout << "������� ������: " << priseDelivery << "\n";
	
	totalPrise = prise + priseDelivery - sale;
	std::cout << "����� ����� � ������: " << totalPrise << "\n";

}
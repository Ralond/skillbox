#include <iostream>



int main() {

	int durationShift = 240;
	int orderTime = 10;
	int orderAssembly = 5;
	int total�lient = durationShift / (orderTime + orderAssembly);

	std::cout << "��� ��������� ����������, ������� �������� ������ ��������� ������ �� �����.\n";
	std::cout << "----------------------------------------------------------------------------\n";

	std::cout << "������� ������������ ����� � �������: " << durationShift << "\n";
	std::cout << "������� ����� ������ ������ �����? " << orderTime << "\n";
	std::cout << "������� ����� ������ �������� �����? " << orderAssembly << "\n";
	std::cout << "------ ������ ������� ------\n";
	
	std::cout << "�� ����� ������ " << durationShift << " ����� ������ ������ ��������� " << total�lient << " ��������.\n";

}
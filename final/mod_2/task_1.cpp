#include <iostream>



int main() {

	int round = 4;

	int engine = 254;
	int wheels = 93;
	int steeringWheel = 49;
	
	int wind = 21;
	int rain = 17;

	int speed = engine + wheels + steeringWheel - wind - rain;




	std::cout << "===================\n";
	std::cout << "����� �����. ���� " << round <<"\n";
	std::cout << "������� ("<< speed<< ")\n";
	std::cout << "��������: �������\n";
	std::cout << "��������: "<< speed << "\n";
	std::cout << "-------------------\n";
	std::cout << "���������\n";
	std::cout << "���������: +" << engine << "\n";
	std::cout << "������: +" << wheels << "\n";
	std::cout << "����: +" << steeringWheel << "\n";
	std::cout << "-------------------\n";
	std::cout << "�������� ������ ������\n";
	std::cout << "�����: -" << wind << "\n";
	std::cout << "�����: -" << rain << "\n";

}
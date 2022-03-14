#include "Equipment.h"
#include "Devices.h"
#include <iostream>
using namespace std;

Equipment::Equipment(int Time, int Cost, int Mass, std::string Company) :_Time(Time), _Mass(Mass), _Cost(Cost), _Company(Company) {
}

Microwave::Microwave(int Time, int Cost, int Mass, std::string Company) :Equipment(Time, Mass, Cost, Company) {
	cout << "It's Microwave" << endl;
}
void Microwave::Show_Info() {
	cout << "����� ������ �������:" << _Time << endl;
	cout << "����� �������:" << _Mass << endl;
	cout << "���� �������: " << _Cost << endl;
	cout << "������-�������������: " << _Company << endl;
}
Electric_Drill::Electric_Drill(int Time, int Cost, int Mass, std::string Company) :Equipment(Time, Cost, Mass, Company) {
	cout << "It's Electric_Drill" << endl;
}
void Electric_Drill::Show_Info() {
	cout << "����� ������ �������:" << _Time << endl;
	cout << "����� �������:" << _Mass << endl;
	cout << "���� �������: " << _Cost << endl;
	cout << "��������-�������������" << _Company << endl;
	
}
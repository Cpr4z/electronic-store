#include "Devices.h"
#include"Equipment.h"
#include "IElectronics.h"
#include <iostream>
using namespace std;

Devices::Devices(int Work_Time, int Weight, short Price, std::string Country) :_Work_Time(Work_Time), _Weight(Weight), _Price(Price), _Country(Country) {
}

Laptop::Laptop(int Work_Time, int Weight, short Price, std::string Country) : Devices(Work_Time, Weight, Price, Country) {
	cout << "Laptop is on" << endl;
}
void Laptop::Show_Info() {
	cout << "����� ������ �������:" << _Work_Time << endl;
	cout << "����� �������:" << _Weight << endl;
	cout << "���� �������: " << _Price << endl;
	cout << "������-�������������: " << _Country << endl;
}
Mouse::Mouse(int Work_Time, int Weight, short Price, std::string Country) : Devices(Work_Time, Weight, Price, Country) {
	cout << "Mouse is on" << endl;
}
void Mouse::Show_Info() {
	cout << "����� ������ �������:" << Devices::_Work_Time << endl;
	cout << "����� �������:" << Devices::_Weight << endl;
	cout << "���� �������: " << Devices::_Price << endl;
	cout << "������-�������������: " << Devices::_Country << endl;
}
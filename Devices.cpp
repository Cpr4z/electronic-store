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
	cout << "время работы девайса:" << _Work_Time << endl;
	cout << "масса девайса:" << _Weight << endl;
	cout << "цена девайса: " << _Price << endl;
	cout << "Страна-производитель: " << _Country << endl;
}
Mouse::Mouse(int Work_Time, int Weight, short Price, std::string Country) : Devices(Work_Time, Weight, Price, Country) {
	cout << "Mouse is on" << endl;
}
void Mouse::Show_Info() {
	cout << "время работы девайса:" << Devices::_Work_Time << endl;
	cout << "масса девайса:" << Devices::_Weight << endl;
	cout << "цена девайса: " << Devices::_Price << endl;
	cout << "Страна-производитель: " << Devices::_Country << endl;
}
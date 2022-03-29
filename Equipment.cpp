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
	cout << "время работы девайса:" << _Time << endl;
	cout << "масса девайса:" << _Mass << endl;
	cout << "цена девайса: " << _Cost << endl;
	cout << "Страна-производитель: " << _Company << endl;
}
Electric_Drill::Electric_Drill(int Time, int Cost, int Mass, std::string Company) :Equipment(Time, Cost, Mass, Company) {
	cout << "It's Electric_Drill" << endl;
}
void Electric_Drill::Show_Info() {
	cout << "время работы девайса:" << _Time << endl;
	cout << "масса девайса:" << _Mass << endl;
	cout << "цена девайса: " << _Cost << endl;
	cout << "компания-производитель" << _Company << endl;	
}
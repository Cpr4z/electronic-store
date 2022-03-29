#include "RobotCleaner.h"
#include "Devices.h"
#include "Equipment.h"
#include <iostream>
using namespace std;
RobotCleaner::RobotCleaner(int time, int cost, int mass, std::string company) :Devices(time,cost,mass,company),
Equipment(time,cost,mass,company),_Work_Time(time),_Prise(cost),_Weight(mass),_Country(company) {}
void RobotCleaner::Show_Info() 
{
	cout << "время работы девайса:" << _Work_Time << endl;
	cout << "цена девайса: " << _Prise << endl;
	cout << "масса девайса:" << _Weight << endl;
	cout << "Страна-производитель: " << _Country << endl;
}
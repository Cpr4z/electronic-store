#include "IElectronics.h"
#include "Equipment.h"
#include "Devices.h"
#include "RobotCleaner.h"
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	IElectronics* elec[10];
	bool open = true;
	while (open) {
		cout << "выберите устройство 0-Laptop,1-Microwave,2-Electric Drill,3-Mouse,4-Robot-Cleaner,5-чтобы выйти" << endl;
		int choice;
		cin >> choice;
		switch (choice) {
		case 0:
			elec[0] = new Laptop(120, 650, 67, "USA");
			elec[0]->Show_Info();
			delete elec[0];
			break;
		case 1:
			elec[1] = new Microwave(30, 450, 98, "Bosh");
			elec[1]->Show_Info();
			delete elec[1];
			break;
		case 2:
			elec[2] = new Electric_Drill(45, 560, 123, "Bork");
			elec[2]->Show_Info();
			delete elec[2];
			break;
		case 3:
			elec[3] = new Mouse(76, 234, 652, "Turkey");
			elec[3]->Show_Info();
			delete elec[3];
			break;
		case 4:
			elec[4] = new RobotCleaner(34, 237, 875, "Russia");
			elec[4]->Show_Info();
			delete elec[4];
			break;
		case 5:
			open = false;
			break;
		default:
			cout << "выберите устройство от 0 до 4" << endl;

		}
	} 
	
	return 0;
}
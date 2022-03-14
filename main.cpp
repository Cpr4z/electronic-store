#include "IElectronics.h"
#include "Equipment.h"
#include "Devices.h"
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	IElectronics* elec[10];
	bool open = true;
	while (open) {
		cout << "выберите устройство 1-Laptop,2-Microwave,3-Electric Drill,4-Mouse,0-чтобы выйти" << endl;
		int choice;
		cin >> choice;
		switch (choice) {
		case 1:
			elec[0] = new Laptop(120, 650, 67, "USA");
			elec[0]->Show_Info();
			break;
		case 2:
			elec[1] = new Microwave(30, 450, 98, "Bosh");
			elec[1]->Show_Info();
			break;
		case 3:
			elec[2] = new Electric_Drill(45, 560, 123, "Bork");
				elec[2]->Show_Info();
				break;
		case 4:
			elec[3] = new Mouse(76, 234, 652, "Turkey");
			elec[3]->Show_Info();
			break;
		case 0:
			open = false;
			break;
		default:
			cout << "выберите устройство от 0 до 4" << endl;

		}
	} 
	delete elec[0];
	delete elec[1];
	delete elec[2];
	delete elec[3];
	return 0;
}
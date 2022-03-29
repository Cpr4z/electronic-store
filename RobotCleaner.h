#pragma once
#include "Devices.h"
#include "Equipment.h"
#include <string>
 class RobotCleaner:public Devices,public Equipment 
{	
public:
	int _Work_Time;
	int _Prise;
	int _Weight;
	std::string _Country;
	RobotCleaner(int time, int cost, int mass, std::string company);
	void Show_Info();
};
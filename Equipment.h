#pragma once
#include "IElectronics.h"
#include "Devices.h"
class Equipment :virtual public IElectronics {
public:
	int _Time;
	int _Cost;
	int _Mass;
	std::string _Company;
	Equipment(int Time, int Cost, int Mass, std::string Company);
	virtual void Show_Info()=0;
};
class Microwave: public Equipment {
public:
	Microwave(int Time, int Cost, int Mass, std::string Company);
	~Microwave() = default;
	void Show_Info();
};
class Electric_Drill : public Equipment {
public:
	Electric_Drill(int Time, int Cost, int Mass, std::string Company);
	~Electric_Drill() = default;
	void Show_Info();
};
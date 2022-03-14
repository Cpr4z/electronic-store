#pragma once
#include "IElectronics.h"
class Devices :virtual public IElectronics {
public:
	int _Work_Time;
	int _Price;
	int _Weight;
	std::string _Country;
public:
	Devices(int Work_Time, int Weight, short Price, std::string Country);
	virtual void Show_Info();
};
class Laptop final :public Devices {
public:
	Laptop(int Work_Time, int Weight, short Price, std::string Country);
	~Laptop() = default;
	void Show_Info();
};
class Mouse final :public Devices {
public:
	Mouse(int Work_Time, int Weight, short Price, std::string Country);
	~Mouse() = default;
	void Show_Info();
};
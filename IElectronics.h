#pragma once
#include <iostream>


class IElectronics {
public:
	virtual void Show_Info() = 0;
	virtual ~IElectronics() = default;
};
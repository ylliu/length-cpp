#pragma once
#include <string>
#include "Unit.h"
class Length
{
public:

	Length(double value, Unit unit) {
		this->value = value;
		this->unit = unit;
	}

	~Length(){};
public:
	Length as(Unit unit);

	double getValue();
	Unit getUnit();
protected:
private:
	double value;
	Unit unit;
private:
};


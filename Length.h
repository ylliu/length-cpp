#pragma once
#include <string>
class Length
{
public:
	Length(double val, std::string uinnt) {
		this->value = val;
		this->unit = uinnt;
	}
	~Length(){};
public:
	Length as(std::string u);
	double getVal();
	std::string getUinnt();
protected:
private:
	double  value;
	std::string unit;

private:
};


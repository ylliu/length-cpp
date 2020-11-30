#pragma once
#include <string>
class Length
{
public:
	Length(double value, std::string unit) {
		this->value = value;
		this->unit = unit;
	}
	~Length(){};
public:
	Length as(std::string targetUnit);
	double getValue();
	std::string getUnit();
protected:
private:
	double value;
	std::string unit;
public:
	static const std::string FOOT;
	static const std::string YARD;
	static const std::string INCH;

private:
};


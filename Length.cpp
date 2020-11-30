#include "length.h"
const std::string Length::FOOT = "foot";
const std::string Length::YARD = "yard";
const std::string Length::INCH = "inch";

Length Length::as(std::string targetUnit)
{
	Length len = *this;
	if (this->unit == FOOT) {
		if (targetUnit == YARD) {
			len = Length(this->value / 3, targetUnit);
		}
		else 
		{
			if (targetUnit == INCH) {
				len = Length(this->value * 12, targetUnit);
			}
		}
	}

	if (this->unit == YARD) {
		if (targetUnit == INCH) {
			len = Length(this->value * 36, targetUnit);
		}
		else if (targetUnit == FOOT){
			len = Length(this->value * 3, targetUnit);
		}
	}

	if (this->unit == INCH) {
		if (targetUnit == FOOT) {
			len = Length(this->value / 12, targetUnit);
		}
		else if (targetUnit == YARD) {
			len = Length(this->value / 36, targetUnit);
		}
	}

	return len;
}


double Length::getValue() {
	return this->value;
}

std::string Length::getUnit() {
	return this->unit;
}
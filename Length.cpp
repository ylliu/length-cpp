#include "length.h"
const std::string Length::FOOT = "foot";

Length Length::as(std::string targetUnit)
{
	Length len = *this;
	if (this->unit == FOOT) {
		if (targetUnit == "yard") {
			len = Length(this->value / 3, targetUnit);
		}
		else if (targetUnit == "inch") {
			len = Length(this->value * 12, targetUnit);
		}
	}

	if (this->unit == "yard") {
		if (targetUnit == "inch") {
			len = Length(this->value * 36, targetUnit);
		}
		else if (targetUnit == FOOT){
			len = Length(this->value * 3, targetUnit);
		}
	}

	if (this->unit == "inch") {
		if (targetUnit == FOOT) {
			len = Length(this->value / 12, targetUnit);
		}
		else if (targetUnit == "yard") {
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
#include "length.h"

Length Length::as(std::string u)
{
	Length len = *this;
	if (this->unit == "f") {
		if (u == "yard") {
			len = Length(this->value / 3, u);
		}
		else if (u == "inch") {
			len = Length(this->value * 12, u);
		}
	}

	if (this->unit == "yard") {
		if (u == "inch") {
			len = Length(this->value * 36, u);
		}
		else if (u == "f"){
			len = Length(this->value * 3, u);
		}
	}

	if (this->unit == "inch") {
		if (u == "f") {
			len = Length(this->value / 12, u);
		}
		else if (u == "yard") {
			len = Length(this->value / 36, u);
		}
	}

	return len;
}


double Length::getVal() {
	return this->value;
}

std::string Length::getUinnt() {
	return this->unit;
}
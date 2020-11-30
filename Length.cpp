#include "length.h"

Length Length::as(Unit unit)
{
	Length len = *this;
	if (this->unit == Unit::FOOT) {
		if (unit == Unit::YARD) {
			len = Length(this->value / 3, unit);
		}
		else
		{
			if (unit == Unit::INCH) {
				len = Length(this->value * 12, unit);
			}
		}
	}

	if (this->unit == Unit::YARD) {
		if (unit == Unit::INCH) {
			len = Length(this->value * 36, unit);
		}
		else if (unit == Unit::FOOT){
			len = Length(this->value * 3, unit);
		}
	}

	if (this->unit == Unit::INCH) {
		if (unit == Unit::FOOT) {
			len = Length(this->value / 12, unit);
		}
		else if (unit == Unit::YARD) {
			len = Length(this->value / 36, unit);
		}
	}

	return len;
}

double Length::getValue() {
	return this->value;
}

Unit Length::getUnit()
{
	return this->unit;
}

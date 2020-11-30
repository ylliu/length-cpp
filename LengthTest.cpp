#include "CppUTest/TestHarness.h"
#include "CppUTestExt/MockSupport.h"
#include "Length.h"
TEST_GROUP(LengthTest){
	void setup(){
	}
	void teardown(){
	}

};


TEST(LengthTest, should_1_inch_equals_1_inch){
	Length result = Length(1, Unit::INCH);
	result = result.as(Unit::INCH);

	CHECK_EQUAL(1.0, result.getValue());
	CHECK_EQUAL(Unit::INCH, result.getUnit());
}

TEST(LengthTest, should_2_feet_equals_2_feet){
	Length result = Length(2, Unit::FOOT);
	result = result.as(Unit::FOOT);

	CHECK_EQUAL(2.0, result.getValue());
	CHECK_EQUAL(Unit::FOOT, result.getUnit());
}

TEST(LengthTest, should_1_yard_equals_1_yard){
	Length result = Length(1, Unit::YARD);
	result = result.as(Unit::YARD);

	CHECK_EQUAL(1.0, result.getValue());
	CHECK_EQUAL(Unit::YARD, result.getUnit());
}

TEST(LengthTest, should_1_foot_equals_12_inches){
	Length result = Length(1, Unit::FOOT);
	result = result.as(Unit::INCH);

	CHECK_EQUAL(12.0, result.getValue());
	CHECK_EQUAL(Unit::INCH, result.getUnit());
}

TEST(LengthTest, should_3_foot_equals_1_yard){
	Length result = Length(3, Unit::FOOT);
	result = result.as(Unit::YARD);

	CHECK_EQUAL(1.0, result.getValue());
	CHECK_EQUAL(Unit::YARD, result.getUnit());
}

TEST(LengthTest, should_1_yard_equals_3_feet){
	Length result = Length(1, Unit::YARD);
	result = result.as(Unit::FOOT);

	CHECK_EQUAL(3.0, result.getValue());
	CHECK_EQUAL(Unit::FOOT, result.getUnit());
}

TEST(LengthTest, should_1_yard_equals_36_inches){
	Length result = Length(1, Unit::YARD);
	result = result.as(Unit::INCH);

	CHECK_EQUAL(36.0, result.getValue());
	CHECK_EQUAL(Unit::INCH, result.getUnit());
}

TEST(LengthTest, should_2_yards_equals_72_inches){
	Length result = Length(2, Unit::YARD);
	result = result.as(Unit::INCH);

	CHECK_EQUAL(72.0, result.getValue());
	CHECK_EQUAL(Unit::INCH, result.getUnit());
}

TEST(LengthTest, should_12_inches_equals_1_foot){
	Length result = Length(12, Unit::INCH);
	result = result.as(Unit::FOOT);

	CHECK_EQUAL(1.0, result.getValue());
	CHECK_EQUAL(Unit::FOOT, result.getUnit());
}

TEST(LengthTest, should_36_inches_equals_1_yard){
	Length result = Length(36, Unit::INCH);
	result = result.as(Unit::YARD);

	CHECK_EQUAL(1.0, result.getValue());
	CHECK_EQUAL(Unit::YARD, result.getUnit());
}

TEST(LengthTest, should_18_inches_equals_half_yard){
	Length result = Length(18, Unit::INCH);
	result = result.as(Unit::YARD);

	CHECK_EQUAL(0.5, result.getValue());
	CHECK_EQUAL(Unit::YARD, result.getUnit());
}
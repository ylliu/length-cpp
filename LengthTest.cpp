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
	Length result = Length(1, "inch");
	result = result.as("inch");

	CHECK_EQUAL(1.0, result.getVal());
	CHECK_EQUAL("inch", result.getUinnt());
}

TEST(LengthTest, should_2_feet_equals_2_feet){
	Length result = Length(2, "f");
	result = result.as("f");

	CHECK_EQUAL(2.0, result.getVal());
	CHECK_EQUAL("f", result.getUinnt());
}

TEST(LengthTest, should_1_yard_equals_1_yard){
	Length result = Length(1, "yard");
	result = result.as("yard");

	CHECK_EQUAL(1.0, result.getVal());
	CHECK_EQUAL("yard", result.getUinnt());
}

TEST(LengthTest, should_1_foot_equals_12_inches){
	Length result = Length(1, "f");
	result = result.as("inch");

	CHECK_EQUAL(12.0, result.getVal());
	CHECK_EQUAL("inch", result.getUinnt());
}

TEST(LengthTest, should_3_foot_equals_1_yard){
	Length result = Length(3, "f");
	result = result.as("yard");

	CHECK_EQUAL(1.0, result.getVal());
	CHECK_EQUAL("yard", result.getUinnt());
}

TEST(LengthTest, should_1_yard_equals_3_feet){
	Length result = Length(1, "yard");
	result = result.as("f");

	CHECK_EQUAL(3.0, result.getVal());
	CHECK_EQUAL("f", result.getUinnt());
}

TEST(LengthTest, should_1_yard_equals_36_inches){
	Length result = Length(1, "yard");
	result = result.as("inch");

	CHECK_EQUAL(36.0, result.getVal());
	CHECK_EQUAL("inch", result.getUinnt());
}

TEST(LengthTest, should_2_yards_equals_72_inches){
	Length result = Length(2, "yard");
	result = result.as("inch");

	CHECK_EQUAL(72.0, result.getVal());
	CHECK_EQUAL("inch", result.getUinnt());
}

TEST(LengthTest, should_12_inches_equals_1_foot){
	Length result = Length(12, "inch");
	result = result.as("f");

	CHECK_EQUAL(1.0, result.getVal());
	CHECK_EQUAL("f", result.getUinnt());
}

TEST(LengthTest, should_36_inches_equals_1_yard){
	Length result = Length(36, "inch");
	result = result.as("yard");

	CHECK_EQUAL(1.0, result.getVal());
	CHECK_EQUAL("yard", result.getUinnt());
}

TEST(LengthTest, should_18_inches_equals_half_yard){
	Length result = Length(18, "inch");
	result = result.as("yard");

	CHECK_EQUAL(0.5, result.getVal());
	CHECK_EQUAL("yard", result.getUinnt());
}
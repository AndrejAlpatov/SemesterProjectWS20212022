#include "pch.h"
#include "../SemesterProjectWS20212022/cGeoPos.h"
#include "../SemesterProjectWS20212022/cGeoPos.cpp"

class cGeoPos;

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestGeoCoordinates, Test_1) {

	//ARRANGE
	cGeoPos obj(181, 91);

	//ACT
	double longitude = obj.getLongitude();
	double latitude = obj.getLatitude();

	//ASSERT
	EXPECT_EQ(longitude, -179.0);
	EXPECT_EQ(latitude, -89.0);
}

TEST(TestGeoCoordinates, Test_2) {

	//ARRANGE
	cGeoPos obj(180,90);

	//ACT
	double longitude = obj.getLongitude();
	double latitude = obj.getLatitude();

	//ASSERT
	EXPECT_EQ(longitude, 180.0);
	EXPECT_EQ(latitude, 90.0);
}

TEST(TestGeoCoordinates, Test_3) {

	//ARRANGE
	cGeoPos obj(540, 180);

	//ACT
	double longitude = obj.getLongitude();
	double latitude = obj.getLatitude();
	
	//ASSERT
	EXPECT_EQ(longitude, 180.0);
	EXPECT_EQ(latitude, 0.0);
}

TEST(TestGeoCoordinates, Test_4) {

	//ARRANGE
	cGeoPos obj(-540, -180);

	//ACT
	double longitude = obj.getLongitude();
	double latitude = obj.getLatitude();

	//ASSERT
	EXPECT_EQ(longitude, -180.0);
	EXPECT_EQ(latitude, 0.0);
}

TEST(TestGeoCoordinates, Test_5) {

	//ARRANGE
	cGeoPos obj(-541, -179);

	//ACT
	double longitude = obj.getLongitude();
	double latitude = obj.getLatitude();

	//ASSERT
	EXPECT_EQ(longitude, 179.0);
	EXPECT_EQ(latitude, 1.0);
}

TEST(TestSetGeoPos, Test_1) {

	//ARRANGE
	cGeoPos obj;

	//ACT
	obj.setGeoPos(-1.0, -1.0);
	double longitude = obj.getLongitude();
	double latitude = obj.getLatitude();

	//ASSERT
	EXPECT_EQ(longitude, -1.0);
	EXPECT_EQ(latitude, -1.0);
}
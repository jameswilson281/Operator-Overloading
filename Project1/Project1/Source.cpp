#include "ThreeDimensionalCoordinate.h"
#include "TwoDimensionalCoordinate.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	auto coordinate1 = ThreeDimensionalWorld::Coordinate(0, 0, 0);
	auto coordinate2 = ThreeDimensionalWorld::Coordinate(0, 0, 0);
	
	bool areEqual = coordinate1 == coordinate2;
	cout << "Equal? " << (areEqual ? "Yes" : "No") << endl;
	system("pause");
	return 0;
}
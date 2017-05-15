#include "ThreeDimensionalCoordinate.h"

namespace ThreeDimensionalWorld
{
	Coordinate::Coordinate() : Coordinate(0, 0, 0)
	{
	}


	Coordinate::~Coordinate()
	{
	}

	bool Coordinate::operator==(Coordinate other)
	{
		return 
			_x == other._x &&
			_y == other._y &&
			_z == other._z;
	}

	bool Coordinate::operator>(Coordinate other) {
		return _x > other._x;
	}

	bool Coordinate::operator>=(Coordinate other)
	{
		return (_x == other._x &&
			_y == other._y &&
			_z == other._z) || 
			_x > other._x;
	}

	Coordinate Coordinate::operator++()
	{
		Coordinate temp = *this;
		temp._x++;
		temp._y++;
		temp._z++;
		return temp;
	}

	std::string Coordinate::Display() 
	{
		return "(" + std::to_string(_x) + "," + std::to_string(_y) + "," + std::to_string(_z) + ")";
	}

	Coordinate::Coordinate(int x, int y, int z) : _x(x), _y(y), _z(z)
	{
	}
}



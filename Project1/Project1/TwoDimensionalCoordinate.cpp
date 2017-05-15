#include "TwoDimensionalCoordinate.h"

namespace TwoDimensionalWorld
{
	Coordinate::Coordinate() : Coordinate(0, 0)
	{
	}


	Coordinate::~Coordinate()
	{
	}

	Coordinate::Coordinate(int x, int y) : _x(x), _y(y)
	{
	}

}



#pragma once
#include <string>

namespace ThreeDimensionalWorld 
{
	class Coordinate
	{
	private:
		int _x, _y, _z;
	public:
		Coordinate();
		Coordinate(int x, int y, int z);
		~Coordinate();
		std::string Display();
		bool operator==(Coordinate other);
		bool operator>(Coordinate other);
		bool operator>=(Coordinate other);
		Coordinate operator++();
	};
}



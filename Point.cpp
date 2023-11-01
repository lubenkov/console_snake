#include "Point.h"

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

bool Point::operator == (const Point& p) const
{
	return (this->x == p.x and this->y == p.y);
}
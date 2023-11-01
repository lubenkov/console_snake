#pragma once

class Point
{
private:
	int x;
	int y;
	
public:

	Point(int x, int y);

	bool operator == (const Point& p) const;

	friend class Snake;
	friend class Map;
};
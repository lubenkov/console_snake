#pragma once
#include <iostream>
#include <vector>
#include "Point.h"
#include "Snake.h"

class Map
{
private:
	int width;
	int height;

	int appleX;
	int appleY;

public:

	Map(int width, int height);

	void drawMap(const std::vector<Point>& snake);

	void generateApple(Snake& s, const std::vector<Point>& snake);
	
};

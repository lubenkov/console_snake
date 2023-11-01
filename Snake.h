#pragma once
#include <iostream>
#include <vector>
#include <conio.h>
#include "Point.h"

class Snake
{

private:

	std::vector<Point> snake;

	enum class Direction { UP, DOWN, LEFT, RIGHT, STOP };
	Direction SnakeDirection;

public:

	Snake(const int& width, const int& height);
	
	void Move();
	
	void UpdateTail();
	
	void IncreaseTail();
	
	void Collision(bool& game, const int& width, const int& height);

	std::vector<Point> getSnake();
	
};
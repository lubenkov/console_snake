#include "Snake.h"

Snake::Snake(const int& width, const int& height)
{
	SnakeDirection = Direction::STOP;

	snake.push_back(Point(width / 2, height / 2));
}

void Snake::Move()
{
	if (_kbhit())
	{
		switch (tolower(_getch()))
		{

		case 'w': SnakeDirection = Direction::UP;
			break;

		case 's': SnakeDirection = Direction::DOWN;
			break;

		case 'a': SnakeDirection = Direction::LEFT;
			break;

		case 'd': SnakeDirection = Direction::RIGHT;

		default:
			break;
		}
	}
}

void Snake::UpdateTail()
{

	for (size_t i = snake.size() - 1; i > 0; --i)
	{
		snake[i] = snake[i - 1];
	}

	switch (SnakeDirection)
	{
	case Direction::UP: snake[0].y -= 1;
		break;

	case Direction::DOWN: snake[0].y += 1;
		break;

	case Direction::LEFT: snake[0].x -= 1;
		break;

	case Direction::RIGHT: snake[0].x += 1;
		break;

	default:
		break;
	}

}

std::vector<Point> Snake::getSnake()
{
	return snake;
}

void Snake::IncreaseTail()
{
	snake.push_back(snake[snake.size() - 1]);
}

void Snake::Collision(bool& game, const int& width, const int& height)
{

	if (snake[0].x <= 0 or snake[0].x >= width - 1 or snake[0].y <= 0 or snake[0].y >= height - 1) game = false;
	for (size_t i = 1; i < snake.size(); ++i)
	{
		if (snake[0] == snake[i])
		{
			game = false;

		}
	}

}
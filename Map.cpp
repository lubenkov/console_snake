#include "Map.h"

Map::Map(int width, int height)
{
	this->width = width;
	this->height = height;

	this->appleX = width / 3;
	this->appleY = height / 3;
}

void Map::drawMap(const std::vector<Point>& snake)
{
	for (size_t i = 0; i < height; ++i)
	{
		for (size_t j = 0; j < width; ++j)
		{
			bool border = (i == 0 or i == height - 1 or j == 0 or j == width - 1);
			char symbol{};
			bool isChanged = false;

			for (const auto& coord : snake)
				if (coord.x == j and coord.y == i)
				{
					symbol = '@';
					isChanged = true;
				}

			bool isApple = (appleX == j and appleY == i);
			if (!isChanged and isApple) symbol = 'A';
			else if (!isChanged and border) symbol = '#';
			else if (!isChanged) symbol = ' ';

			std::cout << symbol;
		}
		std::cout << '\n';
	}
}

void Map::generateApple(Snake& s, const std::vector<Point>& snake)
{
	srand(time(0));

	if (snake[0].x == appleX and snake[0].y == appleY)
	{
		appleX = (rand() % (width - 3)) + 2;
		appleY = (rand() % (height - 3)) + 2;

		s.IncreaseTail();
	}

}
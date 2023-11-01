#include <iostream>
#include "Map.h"
#include "Snake.h"



int main()
{	
	int width = 50;
	int height = 40;

	Snake s(width, height);
	Map m(width, height);

	bool game = true;
	while (game)
	{

		s.Move();
		s.UpdateTail();
		s.Collision(game, width, height);

		m.generateApple(s, s.getSnake());
		m.drawMap(s.getSnake());

		system("cls");
	}

	std::cout << "YOU'RE DEAD!\n"
		"YOUR SCORE: "
		<< s.getSnake().size() - 1
		<< '\n';

	return 0;

}
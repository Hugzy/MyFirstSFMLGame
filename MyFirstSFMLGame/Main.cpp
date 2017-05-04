#include <SFML/Graphics.hpp>
#include <iostream>
#include "Player.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "My First SFML Game");
	Player p;
	int init = 15;
	p.setX(init);



	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		std::cout << p.getX() << std::endl;
		init++;
		std::cout << p.getX() << std::endl;

		window.clear();
		//window.draw();
		window.display();
	}

	return 0;
}
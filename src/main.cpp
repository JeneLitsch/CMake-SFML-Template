#include <SFML/Graphics.hpp>

int main() {
	sf::RenderWindow window;
	window.create(sf::VideoMode{200,200}, "Test");

	while (window.isOpen()) {
		sf::Event event;
		while(window.pollEvent(event)) {
			if(event.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.clear(sf::Color::Red);
		window.display();
	}
	return 0;
}

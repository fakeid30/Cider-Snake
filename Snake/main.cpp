#include <SFML/Graphics.hpp>
#include <time.h>

using namespace sf;

int M = 30, N = 20;
int size = 16;
int w = size*N;
int h = size*M;

int main()
{
	RenderWindow window(VideoMode(w, h), "Cider Snake!");

	Texture t1, t2;
	t1.loadFromFile("images/white.png");
	t2.loadFromFile("images/red.png");

	Sprite sprite1(t1);
	Sprite sprite2(t2);

	while (window.isOpen())
	{
		Event e;
		while (window.pollEvent(e))
		{
			if (e.type == Event::Closed)
				window.close();
		}

		// draw //
		window.clear();
		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++)
			{
				sprite1.setPosition(i*size, j*size);
				window.draw(sprite1);
			}

		window.display();
	}
}
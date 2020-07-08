#include "Background.h"

void Background::Draw(RenderWindow& window)
{

	Texture background;
	background.loadFromFile("bground.png");
	Sprite i(background);
	window.draw(i);


	Texture title;
	title.loadFromFile("title.png");
	Sprite t(title);
	t.move(Vector2f(90.5f, 50.0f));
	window.draw(t);

}


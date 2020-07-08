#include "Soundbuttons.h"
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
using namespace sf;

void Soundbuttons::Draw(RenderWindow& window)
{
	Texture mushroom;
	mushroom.loadFromFile("mushroom.png");
	Sprite m(mushroom);
	m.move(Vector2f(100.0f, 300.0f));
	window.draw(m);


	Texture fireflower;
	fireflower.loadFromFile("fire flower.png");
	Sprite f(fireflower);
	f.move(Vector2f(265.0f, 300.0f));
	window.draw(f);

	Texture coin;
	coin.loadFromFile("coin.png");
	Sprite c(coin);
	c.move(Vector2f(430.0f, 300.0f));
	window.draw(c);

	Texture life;
	life.loadFromFile("1up.png");
	Sprite l(life);
	l.move(Vector2f(100.0f, 420.0f));
	window.draw(l);

	Texture death;
	death.loadFromFile("deathmario.png");
	Sprite d(death);
	d.move(Vector2f(265.0f, 420.0f));
	window.draw(d);

	Texture gameover;
	gameover.loadFromFile("gameover.png");
	Sprite g(gameover);
	g.move(Vector2f(420.0f, 410.0f));
	window.draw(g);


	Texture pipe;
	pipe.loadFromFile("pipe.png");
	Sprite p(pipe);
	p.move(Vector2f(396.0f, 573.0f));
	window.draw(p);

	


	Texture smalljump;
	smalljump.loadFromFile("mariosmalljump.png");
	Sprite jump1(smalljump);
	jump1.move(Vector2f(100.0f, 550.0f));
	window.draw(jump1);


	Texture bigjump;
	bigjump.loadFromFile("mariobigjump.png");
	Sprite jump2(bigjump);
	jump2.move(Vector2f(240.0f, 530.0f));
	window.draw(jump2);

	
	
	Font font;
	if (!font.loadFromFile("SuperPlumberBrothers.ttf"))
	{
		// error...
	}
	buttons.setFont(font);
	buttons.setString("Click me ->");
	buttons.setCharacterSize(24);
	buttons.setFillColor(Color::White);
	buttons.setPosition(Vector2f(380.0f, 520.0f));
	buttons.setRotation(30.0f);
	buttons.rotate(10.0f);
	window.draw(buttons);

}


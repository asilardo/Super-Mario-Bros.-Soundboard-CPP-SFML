#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include "Background.h"
#include "Soundbuttons.h"



int main(void)
{
    sf::RenderWindow window(sf::VideoMode(600, 800), "Super Soundboard Bros.");

    Background image;

    Soundbuttons buttons;


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        image.Draw(window);
        buttons.Draw(window);
        window.display();



        Vector2i mouse = Mouse::getPosition(window);
        float My = Mouse::getPosition(window).y;
        float Mx = Mouse::getPosition(window).x;

    
        if (Mouse::isButtonPressed(Mouse::Left) && Mx > 100.0f && Mx < 180.0f && My > 300.0f && My < 380.0f)
        {
            SoundBuffer buffer;
            if (!buffer.loadFromFile("powerup.wav"))
            {
                return -1;
            }

            Sound powerup;
            powerup.setBuffer(buffer);
            powerup.play();

            while (powerup.getStatus() == sf::Sound::Status::Playing)
                powerup.getLoop();
          
        }

        else if (Mouse::isButtonPressed(Mouse::Left) && Mx > 265.0f && Mx < 345.0f && My > 300.0f && My < 380.0f)    
        {
            SoundBuffer buffer2;
            if (!buffer2.loadFromFile("fireball.wav"))
            {
                return -1;
            }

            Sound fireball;
            fireball.setBuffer(buffer2);
            fireball.play();

            while (fireball.getStatus() == sf::Sound::Status::Playing) 
                fireball.getLoop();
            
        }



        else if (Mouse::isButtonPressed(Mouse::Left) && Mx > 430.0f && Mx < 510.0f && My > 300.0f && My < 380.0f)    
        {
            SoundBuffer buffer3;
            if (!buffer3.loadFromFile("coin.wav"))
            {
                return -1;
            }

            Sound coin;
            coin.setBuffer(buffer3);
            coin.play();

            while (coin.getStatus() == sf::Sound::Status::Playing) 
                coin.getLoop();

        }
    
    
        else if (Mouse::isButtonPressed(Mouse::Left) && Mx > 100.0f && Mx < 180.0f && My > 420.0f && My < 500.0f)    
        {
            SoundBuffer buffer4;
            if (!buffer4.loadFromFile("1-up.wav"))
            {
                return -1;
            }

            Sound oneup;
            oneup.setBuffer(buffer4);
            oneup.play();

            while (oneup.getStatus() == sf::Sound::Status::Playing) 
                oneup.getLoop();

        }
        

        else if (Mouse::isButtonPressed(Mouse::Left) && Mx > 265.0f && Mx < 345.0f && My > 420.0f && My < 500.0f)    
        {
            SoundBuffer buffer5;
            if (!buffer5.loadFromFile("mariodie.wav"))
            {
                return -1;
            }

            Sound mariodie;
            mariodie.setBuffer(buffer5);
            mariodie.play();

            while (mariodie.getStatus() == sf::Sound::Status::Playing) 
                mariodie.getLoop();
            
        }

        else if (Mouse::isButtonPressed(Mouse::Left) && Mx > 430.0f && Mx < 510.0f && My > 420.0f && My < 500.0f)    
        {
            SoundBuffer buffer6;
            if (!buffer6.loadFromFile("gameover.wav"))
            {
                return -1;
            }

            Sound gameover;
            gameover.setBuffer(buffer6);
            gameover.play();

            while (gameover.getStatus() == sf::Sound::Status::Playing) 
                gameover.getLoop();

        }

        else if (Mouse::isButtonPressed(Mouse::Left) && Mx > 100.0f && Mx < 180.0f && My > 550.0f && My < 622.0f)    
        {
            SoundBuffer buffer7;
            if (!buffer7.loadFromFile("jump-small.wav"))
            {
                return -1;
            }

            Sound smalljump;
            smalljump.setBuffer(buffer7);
            smalljump.play();

            while (smalljump.getStatus() == sf::Sound::Status::Playing) 
                smalljump.getLoop();

        }

        else if (Mouse::isButtonPressed(Mouse::Left) && Mx > 240.0f && Mx < 360.0f && My > 530.0f && My < 650.0f)    
        {
            SoundBuffer buffer8;
            if (!buffer8.loadFromFile("jump-super.wav"))
            {
                return -1;
            }

            Sound superjump;
            superjump.setBuffer(buffer8);
            superjump.play();

            while (superjump.getStatus() == sf::Sound::Status::Playing) 
                superjump.getLoop();

        }
        
        else if (Mouse::isButtonPressed(Mouse::Left) && Mx > 396.0f && Mx < 573.0f && My > 546.0f && My < 723.0f)    
        {
            SoundBuffer buffer9;
            if (!buffer9.loadFromFile("pipe.wav"))
            {
                return -1;
            }

            Sound pipe;
            pipe.setBuffer(buffer9);
            pipe.play();

            while (pipe.getStatus() == sf::Sound::Status::Playing) 
                pipe.getLoop();
      
        }
    }
}







   



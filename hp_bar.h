#pragma once
#include "SFML/Graphics.hpp"

class Hp_bar {
private:
	sf::Texture texture;
	sf::Sprite sprite;
	float X_BAR = 1.f;
	float Y_BAR = 1.f;
	float SCALE_1 = 1.f;
	float SCALE_2 = 1.f;
public:
	Hp_bar(float x, float y);
	void update();
	void setSpeed(float speed_x, float speed_y);
	void draw(sf::RenderWindow&);
	sf::FloatRect getHitBox();
	sf::Vector2f getPosition();
	void scale(int);
};
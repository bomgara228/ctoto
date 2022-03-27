#include "hp_bar.h"
#include "settings.h"

Hp_bar::Hp_bar(float x, float y) {
	texture.loadFromFile(IMAGES_FOLDER + HP_BAR);
	sprite.setTexture(texture);
	sf::FloatRect g_bounds = sprite.getGlobalBounds();
	sprite.setPosition(x - g_bounds.width / 2, y - g_bounds.height / 2);
}
void Hp_bar::update() {
	sprite.move(X_BAR,Y_BAR);
	sprite.setScale(SCALE_1, SCALE_2);
}
void Hp_bar::draw(sf::RenderWindow& window) { window.draw(sprite); }
sf::FloatRect Hp_bar::getHitBox() { return sprite.getGlobalBounds(); }
sf::Vector2f Hp_bar::getPosition() { return sprite.getPosition(); }
void Hp_bar::setSpeed(float speed_x, float speed_y) { X_BAR = speed_x, Y_BAR = speed_y; }
void Hp_bar::scale(int hp) { SCALE_1 = hp / 1000; }
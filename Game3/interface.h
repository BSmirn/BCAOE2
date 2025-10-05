#pragma once
#include <SFML/Graphics.hpp>
#include "Graphik.h"
#include <string>
#include <vector>
#include <functional>
using namespace std;

struct Build_button
{
	string textureid;
	rect button_end;
	string name;
	int gold;
	int wood;
	int stone;
	function<void ()> action {};
};

class Level;

void make_interface();
void Conrol_interface(Level& level, int x, int y, bool is_right);
void Draw_interface(sf::RenderWindow& Screen);

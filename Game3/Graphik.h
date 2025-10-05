#pragma once
#include "Rect.h"
#include <map>
#include <memory>
#include <iostream>

struct Texture {
	std::string file {};
	std::shared_ptr<sf::Texture> tex {};
	std::shared_ptr<sf::Sprite> spr {};
};

inline std::map <std::string, Texture> listoftexture; // ��������� �������

void Draw_rect(sf::RenderWindow& Window, rect Rect, bool filled=false);
// ������: Load_Texture("Building", "Resources/Texture.png")
void Load_Texture(std::string textureid, std::string tofile);
void Draw_Texture(sf::RenderWindow& wnd, int x, int y, std::string textureid);
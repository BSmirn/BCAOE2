#pragma once
#include <SFML/Graphics.hpp>

// ������������� (��� ������ � �������� ������������)
class rect
{
public:
	// ������� ������ �������� ����
	float x;
	float y;
	// �������
	float w;
	float h;
	sf::Color color;

	bool on_click(int mouse_x, int mouse_y) const;
};
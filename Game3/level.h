#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <string>

// �� ��� ������� ������� - ���������� � ����������
struct Tile {
    std::string texture {};
    bool canwalk = true;
    bool canswim = false;
    bool free_to_build = true;
};

struct Level {
    // ������������ ������� ������
	int max_x {};
	int max_y {};
    std::string name {};
    int spawn_points {};
    std::vector<Tile> tiles {};
};

// ��������� �������� � ����������� �����
void set_tile(int x, int y, Tile tile);

// true, ���� ������������� �� ����������� ���������
bool check_to_build(const Level& lvl, int x, int y, int max_x, int max_y);

// ������ ����� ��� ���������
void take_pos(Level& lvl, int x, int y, int max_x, int max_y);

Level generate_level();

// ��������� ������
void draw_level(sf::RenderWindow& Window, const Level& lvl);

void camera_movement(sf::RenderWindow& Window, int x, int y, int max_x, int max_y);

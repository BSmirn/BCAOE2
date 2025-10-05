#pragma once
#include <string>
#include <vector>
#include <SFML/Graphics.hpp>
#include "Rect.h"

// ��� ��������� ���� ��������
enum class Type {
    Unknown = 0,

    // �������:
    Fish,
    Tree,
    Stone_iron,
    Gold_iron,

    // �����:
    Villager,
    Knight,

    // ������:
    Main_house,
    Barraks,
    Wall,
    House,
};

struct Object {
    Type type {}; // ��� �������� ������
    std::string texture {}; // �������� �������� (�� �����)
    float x {}; // ��������� x � �������
    float y {}; // ��������� � � �������
    float speed {}; // �������� �������
    int hp {}; // ����� ������� ��� ���������� �������
    int hp_max {};
    int damage {}; // ���� ��� �����
    rect hitbox {}; // ������� ��� ��������� �� �������
    bool show_interface {}; // ���� True - ����� ������� ��������� ��������������
};

inline std::vector<Object> objects;

// ����� �������
void spawn(const Object& obj);
// ��������� ���� ��������
void draw_objects(sf::RenderWindow& window);
// �������� ������ ���� ��������
void update_objects(float dt=1.0/60.0);

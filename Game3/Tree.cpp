#include "Tree.h"

// object - объект убийца дерева
void Tree::kill (Object* other)
{
	other->player->wood += this->hp_max;
}
void Tree::on_damage(Object* other)
{
	if (other->damage > this->hp)
		other->player->wood += hp;
	else
		other->player->wood += other->damage;
}
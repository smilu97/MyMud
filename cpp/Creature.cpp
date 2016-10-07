#include "Creature.h"

Creature::Creature(Tile *p_onTile_) : Object(p_onTile_)
{
	HP = 1;
	MP = 1;
}

Creature::~Creature()
{

}

int Creature::get_HP()
{
	return HP;
}
int Creature::get_MP()
{
	return MP;
}
int Creature::set_HP(int val)
{
	HP = val;
	return val;
}
int Creature::set_MP(int val)
{
	MP = val;
	return val;
}
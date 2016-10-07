#ifndef _CREATURE_HEADER_
#define _CREATURE_HEADER_ 0

#include "Object.h"

class Creature : public Object
{
private:
	int HP;
	int MP;
public:
	Creature(Tile *p_onTile_) : Object(p_onTile_);
	~Creature();
	int get_HP();
	int get_MP();
	int set_HP(int val);
	int set_MP(int val);
};


#endif
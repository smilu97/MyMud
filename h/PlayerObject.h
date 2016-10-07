#ifndef _PLAYEROBJECT_HEADER_
#define _PLAYEROBJECT_HEADER_ 0

#include <iostream>

using namespace std;

#include "Creature.h"

#define INPUT_LEFT 35
#define INPUT_RIGHT 36
#define INPUT_UP 37
#define INPUT_DOWN 38
#define CHARCHAR 0

class PlayerObject : public Creature
{
private:

public:
	PlayerObject(Tile *p_onTile_) : Creature(p_onTile_);
	~PlayerObject();
	void cycle();
};

#endif
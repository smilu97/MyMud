#ifndef _PLAYEROBJECT_HEADER_
#define _PLAYEROBJECT_HEADER_ 0

#include "Creature.h"

class PlayerObject : public Creature
{
private:

public:
	PlayerObject(Tile *p_onTile_) : Creature(p_onTile_);
	~PlayerObject();
}

#endif
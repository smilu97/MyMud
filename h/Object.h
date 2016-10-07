#ifndef _OBJECT_HEADER_
#define _OBJECT_HEADER_ 0

#include "Position.h"
#include "Tile.h"

class Object
{
private:
	Tile *p_onTile;
	Position *p_position;
public:
	Object(Tile *p_onTile_);
	~Object();
	Position* get_p_positon();
	int MoveRight();
	int MoveLeft();
	int MoveUp();
	int MoveDown();
	int Teleport(int x, int y);
}

#endif
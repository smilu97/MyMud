#include "PlayerObject.h"

PlayerObject::PlayerObject(Tile *p_onTile_) : Creature(p_onTile_)
{

}

PlayerObject::~PlayerObject
{

}

void PlayerObject::cycle()
{
	int moved;
	fflush(stdin);
	char playerInput = getch();
	if(playerInput == INPUT_LEFT) {
		moved = MoveLeft();
		if(moved) {
			p_onTile->updateSpot(x, y+1);
			p_onTile->updatespot(x, y, CHARCHAR);
		}
	}
	else if(playerInput == INPUT_RIGHT) {
		moved = MoveRight();
		if(moved) {
			p_onTile->updateSpot(x, y-1);
			p_onTile->updateSpot(x, y, CHARCHAR);
		}
	}
	else if(playerInput == INPUT_DOWN) {
		moved = MoveDown();
		if(moved) {
			p_onTile->updateSpot(x-1, y);
			p_onTile->updateSpot(x, y, CHARCHAR);
		}
	}
	else if(playerInput == INPUT_UP) {
		moved = MoveUp();
		if(moved) {
			p_onTile->updateSpot(x+1, y);
			p_onTile->updateSpot(x, y, CHARCHAR);
		}
	}
}
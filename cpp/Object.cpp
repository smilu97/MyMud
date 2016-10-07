#include "Object.h"

Object::Object(Tile *p_onTile_)
{
	p_onTile = p_onTile_;
	p_position = new Position();
}

Object::~Object()
{
	delete p_position;
}

Position* Object::get_p_position()
{
	return p_position;
}

int Object::MoveRight()
{
	int x = p_position->get_x();
	int y = p_position->get_y();
	if(p_onTile->checkMovable(x+1,y)) {
		p_position->set_x(x+1);
		p_position->set_y(y);
		return 1;
	}
	else {
		return 0;
	}
}

int Object::MoveLeft()
{
	int x = p_position->get_x();
	int y = p_position->get_y();
	if(p_onTile->checkMovable(x-1,y)) {
		p_position->set_x(x-1);
		p_position->set_y(y);
		return 1;
	}
	else {
		return 0;
	}
}

int Object::MoveDown()
{
	int x = p_position->get_x();
	int y = p_position->get_y();
	if(p_onTile->checkMovable(x,y+1)) {
		p_position->set_x(x);
		p_position->set_y(y+1);
		return 1;
	}
	else {
		return 0;
	}
}

int Object::MoveUp()
{
	int x = p_position->get_x();
	int y = p_position->get_y();
	if(p_onTile->checkMovable(x,y-1)) {
		p_position->set_x(x);
		p_position->set_y(y-1);
		return 1;
	}
	else {
		return 0;
	}
}

int Object::Teleport(int x, int y)
{
	if(p_onTile->checkMovable(x, y)) {
		p_position->set_x(x);
		p_position->set_y(y);
		return 1;
	}
	else {
		return 0;
	}
}
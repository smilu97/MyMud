#include "../Position.h"

Position::Position()
{
	
}

Position::~Position()
{

}

int Position::get_x()
{
	return x;
}
int Position::get_y()
{
	return y;
}
int Position::set_x(int val)
{
	x = val;
	return val;
}
int Position::set_y(int val)
{
	y = val;
	return val;
}
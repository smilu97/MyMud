#ifndef _POSITION_HEADER_ 
#define _POSITION_HEADER_ 0

class Position
{
private:
	int x;
	int y;
public:
	Position();
	~Position();
	int get_x();
	int get_y();
	int set_x(int val);
	int set_y(int val);
};

#endif
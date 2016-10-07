#ifndef _TILE_HEADER_
#define _TILE_HEADER_ 0

class Tile
{
private :
	int *dat;
	int *movable;
	int dat_size;
	int width;
	int height;
public:
	Tile(int width, int height);
	~Tile();
	int get(int x, int y);
	int set(int x, int y, int val);
	int* get_dat();
	int checkMovable(int x, int y);
}

#endif
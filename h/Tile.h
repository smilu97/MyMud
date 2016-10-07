#ifndef _TILE_HEADER_
#define _TILE_HEADER_ 0

#include "TileMap.h"

#include <iostream>

using namespace std;

class Tile
{
private :
	TileMap *p_tilemap;
	int *dat;
	int *movable;
	int dat_size;
	int width;
	int height;
public:
	Tile(int width, int height, char* tilemap_path);
	~Tile();
	int get(int x, int y);
	int set(int x, int y, int val);
	int* get_dat();
	int checkMovable(int x, int y);
	void print();
};

#endif
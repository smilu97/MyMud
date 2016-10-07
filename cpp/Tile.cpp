#include "Tile.h"

Tile::Tile(int width, int height, char* tilemap_path)
{
	this->dat_size = width * height;
	this->dat = new int[this->dat_size];
	this->movable = new int[this->dat_size];
	this->p_tilemap = new TileMap(tilemap_path);
	this->width = width;
	this->height = height;
	for(int i=0;i<dat_size;++i){
		dat[i] = 0;
		movable[i] = 0;
	}
}

Tile::~Tile()
{
	delete[] dat;
	delete[] movable;
	delete p_tilemap;
}

int Tile::get(int x, int y)
{
	return this->dat[(x*width)+y];
}

int Tile::set(int x, int y, int val)
{
	this->dat[(x*width)+y] = val;
	return val;
}

int* Tile::get_dat()
{
	return this->dat;
}

int Tile::checkMovable(int x, int y)
{
	if(x < 0 || x >= width) return 0;
	if(y < 0 || y >= height) return 0;
	if(movable[(x*width)+y]) return 1;
	return 0;
}

void Tile::print()
{
	for(int x=0; x<height; ++x) {
		for(int y=0; y<width; ++y) {

		}
	}
}
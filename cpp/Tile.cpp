#include "../Tile.h"

Tile::Tile(int width, int height)
{
	this->dat_size = width * height;
	this->dat = new int[this->dat_size];
	this->width = width;
	this->height = height;
}

Tile::~Tile()
{
	delete[] dat;
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
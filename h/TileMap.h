#ifndef _TILEMAP_HEADER_
#define _TILEMAP_HEADER_ 0

#include <map>
#include <fstream>

using namespace std;

char intFirstByte(int val)
{
	return (val & 255);
}
char intSecondByte(int val)
{
	return (val & 65280) >> 8;
}

class TileMap
{
private :
	map<int, int> dat;
public :
	TileMap();
	TileMap(char* filepath);
	~TileMap();
	int LoadByFile(char* filepath);
	int get(int key);
};

#endif
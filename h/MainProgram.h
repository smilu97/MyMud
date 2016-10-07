#ifndef _MAINPROGRAM_HEADER_
#define _MAINPROGRAM_HEADER_ 0

#include <iostream>

using namespace std;

#include "Tile.h"
#include "PlayerObject.h"

class MainProgram
{
private :
	int running;
	Tile *p_nowTile;
	Player *p_player;
public :
	MainProgram();
	~MainProgram();
	void Run(int argc, char** argv);
};

#endif
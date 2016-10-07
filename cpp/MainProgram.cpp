#include "MainProgram.h"

MainProgram::MainProgram(int argc, char** argv)
{
	running = 0;
	p_nowTile = NULL;
	p_player = new PlayerObject(p_nowTile);
}

MainProgram::~MainProgram()
{
	if(running) {
		delete p_nowTile;
	}
	delete p_player;
}

void MainProgram::Run(int argc, char** argv)
{
	p_nowTile->print();
	while(true)
	{
		p_player->cycle();
	}
}
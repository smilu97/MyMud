#include "MainProgram.h"

MainProgram::MainProgram(int argc, char** argv)
{
	running = 0;
	p_nowTile = NULL;
}

MainProgram::~MainProgram()
{
	if(running) {
		delete p_nowTile;
	}
}

void MainProgram::Run(int argc, char** argv)
{

}
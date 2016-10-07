#ifndef _MAINPROGRAM_HEADER_
#define _MAINPROGRAM_HEADER_ 0

class MainProgram
{
private :
	int running;
	Tile *p_nowTile;
public :
	MainProgram();
	~MainProgram();
	void Run(int argc, char** argv);
}

#endif
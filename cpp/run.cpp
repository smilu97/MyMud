#include "run.h"

int main(int argc, char** argv)
{
	MainProgram *mainProgram = new MainProgram();
	mainProgram->run(argc, argv);
	return 0;
}
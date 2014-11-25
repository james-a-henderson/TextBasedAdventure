#include <string>
#include <iostream>
#include "GameState.h"
using namespace std;


//Processes input

void processInput(string input, GameState * game)
{
	//exits game if input is exit
	if (input == "exit" || input == "Exit")
	{
		game->setExit(true);
	}
}
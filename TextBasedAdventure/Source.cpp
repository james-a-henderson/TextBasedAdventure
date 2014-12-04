#include <iostream>
#include <string>
#ifndef GameState_h
#define GameState_h
#include "GameState.h"
#endif
using namespace std;

void processInput(string Input, GameState * game);

int main()
{
	GameState game;

	while (game.getExit() == false)
	{
		string input;
		getline(cin, input);

		processInput(input, &game);
	}
}
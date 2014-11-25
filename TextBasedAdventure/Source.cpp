#include <iostream>
#include <string>
#include "GameState.h"
using namespace std;

void processInput(string Input, GameState * game);

int main()
{
	GameState game;

	while (game.getExit() == false)
	{
		string input;
		cin >> input;

		processInput(input, &game);
	}
}
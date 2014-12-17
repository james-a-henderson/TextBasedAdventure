#include <iostream>
#include <string>
#ifndef GameState_h
#define GameState_h
#include "GameState.h"
#endif
#include <vector>
#include <string>

using namespace std;

void processInput(string Input, GameState * game);

int main()
{
	GameState game;
	string testName = "Test Item";
	string testDescription = "A test Item";
	vector<string> testVec{"Test", "test item"};
	Item testItem(testName, testDescription, testVec);

	testItem.look();

	while (game.getExit() == false)
	{
		string input;
		getline(cin, input);

		processInput(input, &game);
	}
}
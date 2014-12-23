#include <iostream>
#include <string>
#ifndef GameState_h
#define GameState_h
#include "GameState.h"
#endif

#ifndef Item_h
#define Item_h
#include "Item.h"
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
	testItem.addToInventory(&game);
	game.viewInventory();

	testItem.look();

	while (game.getExit() == false)
	{
		string input;
		getline(cin, input);

		processInput(input, &game);
	}
}
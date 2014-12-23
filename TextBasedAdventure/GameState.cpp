#include <string>
#include <iostream>

#ifndef GameState_h
#define GameState_h
#include "GameState.h"
#endif
using namespace std;


//Includes variables that record all parts of the game state

GameState::GameState()
{
	exit = false;
}

//gets the value of exit
bool GameState::getExit()
{
	return exit;
}

//sets the value of exit to nExit
void GameState::setExit(bool nExit)
{
	exit = nExit;
}

void GameState::setExit()
{
	exit = true;
}

void GameState::addItem(Item *item)
{
	inventory.push_back(*item);
}


/*
To Do: Modify to show first callString
*/
void GameState::viewInventory()
{
	for (vector<Item>::size_type i = 0; i != inventory.size(); i++)
	{
		cout << inventory.at(i).getItemName() << '\n';
	}
}


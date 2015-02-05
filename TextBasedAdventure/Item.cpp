#include <string>
#include <vector>
#include <iostream>
#include <boost/algorithm/string.hpp>

#include "Item.h"
#include "GameState.h"
#include "Room.h"

using namespace std;
/*
Represents any item that can be interacted with in the game world


*/

Item::Item(string nItemName, string nDescription, vector<string> sCallStrings)
{
	itemName = nItemName;
	description = nDescription;
	callStrings = sCallStrings;
}

/*
returns the descritpion of the item
*/
string Item::getDescription()
{
	return description;
}

/*
set the item descritption
*/
void Item::setDescription(string nDescription)
{
	description = nDescription;
}

/*
returns the item name
*/
string Item::getItemName()
{
	return itemName;
}

/*
set the name of the item
*/
void Item::setItemName(string nItemName)
{
	itemName = nItemName;
}



/*
displays the description of the item when the player types "look at [itemName]"
*/
void Item::look()
{
	cout << description << '\n';
}

/*
This is for when an item is directly added to the player's inventory

Do NOT use when picking up an item from the ground (use Item::pickup instead)
*/
void Item::addToInventory(GameState* game)
{
	game->addItem(*this);

}

/*
processes user input for this item
*/
bool Item::processInput(GameState* game, const vector<string> * inputVec)
{
	if (inputVec->size() == 2 && boost::iequals(inputVec->at(0), "drop") && verifyCallString(inputVec->at(1)))
	{
		game->dropItem(itemName);
		return true;
	}
	else if (inputVec->size() == 3 && boost::iequals(inputVec->at(0) + " " + inputVec->at(1), "pick up") && verifyCallString(inputVec->at(2)))
	{
		game->getCurrentRoom()->pickUpItem(itemName, game);
		return true;
	}
	else if (verifyCallString(inputVec->at(0)))
	{
		cout << "VerifyCallString works!\n";
		return true;
	}

	return false;
	
}

/*
checks if a string is part of the item's call strings, ignoring case

returns true if the string is in the callString vector, false otherwise
*/
bool Item::verifyCallString(string checkString)
{
	for (vector<string>::iterator it = callStrings.begin(); it != callStrings.end(); ++it)
	{
		if (boost::iequals(*it, checkString))
			return true;
	}

	return false;
}



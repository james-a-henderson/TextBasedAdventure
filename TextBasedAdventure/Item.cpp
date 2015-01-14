#include <string>
#include <vector>
#include <iostream>

#ifndef Item_h
#define Item_h
#include "Item.h"
#endif

using namespace std;
/*
Represents any item that can be interacted with in the game world


*/

Item::Item(string nItemName, string nDescription, vector<string> sCallStrings)
{
	itemName = nItemName;
	description = nDescription;
	callStrings = callStrings;
}

string Item::getDescription()
{
	return description;
}

string Item::getItemName()
{
	return itemName;
}

void Item::setItemName(string nItemName)
{
	itemName = nItemName;
}

void Item::setDescription(string nDescription)
{
	description = nDescription;
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
void Item::addToInventory(GameState *game)
{
	game->addItem(*this);
}
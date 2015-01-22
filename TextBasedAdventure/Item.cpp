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
processes user input
*/
bool Item::processInput(const vector<string> * inputVec)
{
	return false;
	
}
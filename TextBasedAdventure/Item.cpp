#include <string>
#include <vector>
#include <iostream>

#ifndef Item_h
#define Item_h
#include "Item.h"
#endif

#ifndef GameState_h
#define GameState_h
#include "GameState.h"
#endif

using namespace std;
/*
Represents an item that can be picked up and used by the player


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
displays the description of the item when the player types "look at [itemName]
*/
void Item::look()
{
	cout << description << '\n';
}
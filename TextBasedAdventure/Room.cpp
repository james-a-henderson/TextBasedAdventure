#ifndef Room_h
#define Room_h
#include "Room.h"
#endif

#ifndef Item_h
#define Item_h
#include "Item.h"
#endif

#ifndef GameObject_h
#define GameObject_h
#include "GameObject.h"
#endif

#include <boost/algorithm/string.hpp>
#include <string>
#include <vector>
#include <iostream>

/*
Represents a basic room entity
*/

Room::Room(string sName, string sDescription)
{
	roomName = sName;
	description = sDescription;
	connectedRoom = "";
}

Room::Room(string sName, string sDescription, string sConnectedRoom)
{
	roomName = sName;
	description = sDescription;
	connectedRoom = sConnectedRoom;
}

/*
Returns the room name
*/
string Room::getRoomName()
{
	return roomName;
}

/*
Prints out the description of the current room
*/
void Room::look()
{
	cout << description << '\n';
}


/*
Changes the current room to annother room based on the command issued.

Feel free to override this function. It will probably be necessary
*/
void Room::exit(string command, GameState* game)
{
	//This is currently testing code. Will update
	if (boost::iequals(command, "a name"))
	{
		game->setCurrentRoom("A Name");
	}
	else if (boost::iequals(command, "another room"))
	{
		game->setCurrentRoom("Another Room");
	}
	else if (boost::iequals(command, "switch"))
	{
		game->setCurrentRoom(connectedRoom);
	}


}

/*
Adds an item to the room.

Used when a player drops an item, among other uses.
*/
void Room::addItem(Item newItem)
{
	roomItems.push_back(newItem);
}

/*
Displays all of the items in the room
*/
void Room::viewItems()
{
	cout << "Items in the room:\n";
	for (vector<Item>::iterator it = roomItems.begin(); it != roomItems.end(); ++it)
	{
		cout << it->getItemName() << '\n';
	}
}

/*
processes input for all items in the room
*/
bool Room::processInput(const vector<string> *inputVec)
{
	bool foundInput = false;
	//process input for all items in the room
	for (vector<Item>::iterator it = roomItems.begin(); it != roomItems.end(); ++it)
	{
		if (it->processInput(inputVec) == true)
		{
			foundInput = true;
			break;
		}
	}

	return foundInput;
}

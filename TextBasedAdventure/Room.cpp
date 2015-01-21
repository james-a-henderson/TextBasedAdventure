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

string Room::getRoomName()
{
	return roomName;
}

void Room::look()
{
	cout << description << '\n';
}


void Room::exit(string command, GameState *game)
{
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
void Room::processInput(const vector<string> *inputVec)
{

	//process input for all items in the room
	for (vector<Item>::iterator it = roomItems.begin(); it != roomItems.end(); ++it)
	{
		it->processInput(inputVec);
	}
}

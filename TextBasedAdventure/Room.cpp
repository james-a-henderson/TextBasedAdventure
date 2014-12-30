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

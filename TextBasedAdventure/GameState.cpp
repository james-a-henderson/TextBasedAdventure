#include <string>
#include <iostream>


#ifndef GameState_h
#define GameState_h
#include "GameState.h"
#endif

#include <boost/algorithm/string.hpp>
using namespace std;



/*
Includes variables that record all parts of the game state
*/
GameState::GameState()
{
	exit = false; //when exit is true, the game will exit

	/*
	add all rooms here
	ROOM NAMES MUST BE UNIQUE!!!
	*/
	roomList.push_back(Room("A Name", "A Description", "Another Room"));
	roomList.push_back(Room("Another Room", "Some Description", "A Name"));

	currentRoomIndex = 0;
}

/*
gets the value of exit
*/
bool GameState::getExit()
{
	return exit;
}


/*
sets the value of exit to nExit
*/
void GameState::setExit(bool nExit)
{
	exit = nExit;
}

/*
sets the bvalue of exit to true
*/
void GameState::setExit()
{
	exit = true;
}

/*
adds item to inventory
*/
void GameState::addItem(Item newItem)
{
	inventory.push_back(newItem);
}

/*
adds the specified item to the current room and removes it from the inventory
*/
void GameState::dropItem(string itemName)
{
	for (int i = 0; i < inventory.size(); i++)
	{
		if (inventory.at(i).getItemName() == itemName)
		{
			getCurrentRoom()->addItem(inventory.at(i));

			inventory.erase(inventory.begin() + i);

			break;
		}
	}
	
}

/*
To Do: Modify to show first callString
*/
void GameState::viewInventory()
{
	cout << "Items in your inventory:\n";

	for (vector<Item>::size_type i = 0; i != inventory.size(); i++)
	{
		cout << inventory.at(i).getItemName() << '\n';
	}
}

/*
returns a pointer of the current room
*/
Room* GameState::getCurrentRoom()
{
	return &roomList.at(currentRoomIndex);
}


/*
returns a pointer containing a room with the name roomName
if room cannot be found, returns null
*/
Room* GameState::getRoom(string roomName)
{
	for (vector<Room>::size_type i = 0; i != roomList.size(); i++)
	{
		if (roomList.at(i).getRoomName() == roomName)
		{
			return &roomList.at(i);
		}
	}

	return NULL;
}


/*
sets the current room to the room with the name roomName
*/
void GameState::setCurrentRoom(string roomName)
{
	bool success = false; //test purposes

	for (vector<Room>::size_type i = 0; i != roomList.size(); i++)
	{
		if (roomList.at(i).getRoomName() == roomName)
		{
			currentRoomIndex = i;
			success = true; //test purposes
		}
	}

	//error message for test purposes
	if (!success)
	{
		cout << "Error: Room not found\n";
	}
}


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

#include <string>
#include <vector>

/*
Represents a basic room entity
*/

Room::Room(string sName, string sDescription, vector<string>sCallStrings)
{
	callStrings = sCallStrings;
	roomName = sName;
	description = sDescription;

}




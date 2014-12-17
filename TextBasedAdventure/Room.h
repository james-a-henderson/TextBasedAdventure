#ifndef Item_h
#define Item_h
#include "Item.h"
#endif

#include <string>
#include <vector>

class Room
{
protected:
	string roomName;
	string description;
	vector<string> callStrings;
public:
	Room(string sName, string sDescription, vector<string> sCallStrings);
	void removeObject(string objectName);
	vector<string> getCallStrings();
	string getRoomName();
	string getDescription();
	void setRoomName(string nName);
	void setDescription(string nDescription);
};
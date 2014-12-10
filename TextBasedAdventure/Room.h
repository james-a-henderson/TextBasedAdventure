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

class Room
{
protected:
	string roomName;
	string description;
	vector<GameObject> roomObjects;
	vector<string> callStrings;
public:
	Room(string sName, string sDescription, vector<string> sCallStrings);
	void addObject(GameObject o);
	void removeObject(GameObject o);
	void removeObject(string objectName);
	vector<string> getCallStrings();
	GameObject getObject(string objectName);
	string getRoomName();
	string getDescription();
	void setRoomName(string nName);
	void setDescription(string nDescription);
};
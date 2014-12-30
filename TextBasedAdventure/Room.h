#include <string>
#include <vector>

#ifndef GameState_h
#define GameState_h
#include "GameState.h"
#endif

#ifndef Item_h
#define Item_h
#include "Item.h"
#endif


class GameState;
class Item;
using namespace std;
class Room
{
protected:
	string roomName;
	string description;
	string connectedRoom; //for test purposes
	vector<Item> roomItems;
public:
	Room(string sName, string sDescription);
	Room(string sName, string sDescritpion, string sConnectedRoom);//for test purposes
	void removeObject(string objectName);
	vector<string> getCallStrings();
	string getRoomName();
	string getDescription();
	void setRoomName(string nName);
	void setDescription(string nDescription);
	void exit(string command, GameState *game);
	void look();
};
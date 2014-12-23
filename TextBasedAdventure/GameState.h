#include <vector>

#ifndef Item_h
#define Item_h
#include "Item.h"
#endif

#ifndef Room_h
#define Room_h
#include "Room.h"
#endif

class Room;
class Item;
using namespace std;

class GameState
{
private: 
	bool exit; //default false
	vector<Item> inventory; //default empty
	string currentRoomName;
	Room *currentRoom;
	vector<Room> roomList;

public:
	GameState();
	bool getExit();
	void setExit(bool nExit);
	void setExit();
	void addItem(Item *item);
	void viewInventory();
	Room *getRoom(string roomName);
	Room *getCurrentRoom();
};
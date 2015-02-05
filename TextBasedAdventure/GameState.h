#ifndef GAME_STATE_H
#define GAME_STATE_H
#endif

#include <vector>
#include <string>
class Room;
class Item;

class GameState
{
private: 
	bool exit; //default false
	std::vector<Item> inventory; //default empty
	std::string currentRoomName;
	int currentRoomIndex;
	std::vector<Room> roomList;

public:
	GameState();
	bool getExit();
	void setExit(bool nExit);
	void setExit();
	void addItem(Item newItem);
	void viewInventory();
	bool processInventoryInput(std::string input);
	bool itemInInventory(std::string itemName);
	Room *getRoom(std::string roomName);
	Room *getCurrentRoom();
	void setCurrentRoom(std::string roomName);
	void dropItem(std::string itemName);
};
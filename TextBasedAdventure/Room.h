#ifndef ROOM_H
#define ROOM_H
#endif

#include <string>
#include <vector>

class GameState;
class Item;
class Room
{
protected:
	std::string roomName;
	std::string description;
	std::string connectedRoom; //for test purposes
	std::vector<Item> roomItems;
public:
	Room(std::string sName, std::string sDescription);
	Room(std::string sName, std::string sDescritpion, std::string sConnectedRoom);//for test purposes
	void removeItem(std::string itemName);
	void pickUpItem(std::string itemName, GameState* game);
	std::vector<std::string> getCallStrings();
	std::string getRoomName();
	std::string getDescription();
	void setRoomName(std::string nName);
	void setDescription(std::string nDescription);
	void exit(std::string command, GameState* game);
	void look();
	void addItem(Item i);
	void viewItems(); //for test purposes
	bool processInput(GameState* game, const std::vector<std::string> *inputVec); //process input related to the room
};
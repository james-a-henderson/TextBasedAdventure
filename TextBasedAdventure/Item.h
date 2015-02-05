#ifndef ITEM_H
#define ITEM_H
#endif

#include <string>
#include <vector>



class GameState;
class Item
{
protected:
	std::string pickUpText; //text when item is picked up
	std::string dropText; //text when item is dropped
	bool pickUpable; //can pick up item and put it in inventory
	bool dropable; //can drop the item from inventory
	std::string itemName; //name of item (for use in code)
	std::string description; //description of the item
	std::vector<std::string> callStrings; //anything that the player can call the item

public:
	Item(std::string nItemName, std::string nDescription, std::vector<std::string> sCallStrings);
	Item(std::string sName, std::string sDescription, std::string sPickUpText, std::string sDropText, bool sPickUpable, bool sDropable);
	void addToInventory(GameState* game);
	void pickup(GameState* game);
	void use(Item useWith);
	std::string getItemName();
	std::string getDescription();
	std::vector<std::string> getCallStrings();
	void setItemName(std::string nName);
	void setDescription(std::string nDescription);
	void look();
	bool processInput(GameState* game, const std::vector<std::string> *inputVec); //process input related to the item
	bool verifyCallString(std::string checkString);
	int checkForCallString(const std::vector<std::string> * inputVec);
};
#include <string>
#include <vector>

#ifndef GameState_h
#define GameState_h
#include "GameState.h"
#endif

class GameState;
using namespace std;
class Item
{
protected:
	string pickUpText; //text when item is picked up
	string dropText; //text when item is dropped
	bool pickUpable; //can pick up item and put it in inventory
	bool dropable; //can drop the item from inventory
	string itemName; //name of item (for use in code)
	string description; //description of the item
	vector<string> callStrings; //anything that the player can call the item

public:
	Item(string nItemName, string nDescription, vector<string> sCallStrings);
	Item(string sName, string sDescription, string sPickUpText, string sDropText,bool sPickUpable, bool sDropable);
	void addToInventory(GameState * game);
	void pickup(GameState *game);
	void drop(GameState *game);
	void use(Item useWith);
	string getItemName();
	string getDescription();
	vector<string> getCallStrings();
	void setItemName(string nName);
	void setDescription(string nDescription);
	void look();
	void processInput(const vector<string> *inputVec); //process input related to the item
};
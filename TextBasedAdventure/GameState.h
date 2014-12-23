#include <vector>

#ifndef Item_h
#define Item_h
#include "Item.h"
#endif
class Item;
using namespace std;

class GameState
{
private: 
	bool exit; //default false
	vector<Item> inventory; //default empty
		 
public:
	GameState();
	bool getExit();
	void setExit(bool nExit);
	void setExit();
	void addItem(Item *item);
	void viewInventory();
};
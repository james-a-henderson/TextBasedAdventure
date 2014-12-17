#include <vector>
#ifndef Item_h
#define Item_h
#include "Item.h"
#endif

#ifndef GameObject_h
#define GameObject_h
#include "GameObject.h"
#endif
using namespace std;

class GameState
{
private: bool exit; //default false
		 //vector<Item> inventory; //default empty
		 
public:
	GameState();
	bool getExit();
	void setExit(bool nExit);
};
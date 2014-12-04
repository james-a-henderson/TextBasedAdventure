#include <string>
#ifndef GameObject_h
#define GameObject_h
#include "GameObject.h"
#endif

class Item : public GameObject
{
protected:
	string pickUpText;
	string dropText;
	bool pickUpable;
	bool dropable;

public:
	Item(string sName, string sDescription, string sPickUpText, string sDropText,bool sPickUpable, bool sDropable);
	void pickup();
	void drop();
	void use(GameObject useWith);
};
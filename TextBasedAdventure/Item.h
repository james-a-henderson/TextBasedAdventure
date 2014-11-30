#pragma once
#include <string>

using namespace std;
class Item
{
protected:
	string itemName;
	string description;

public:
	Item(string sName, string sDescription);
	string getItemName();
	string getDescription();
	void setItemName(string nName);
	void setDescription(string nDescription);
	~Item();
};


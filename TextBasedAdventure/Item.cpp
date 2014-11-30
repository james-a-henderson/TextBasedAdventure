#include "Item.h"
#include <string>
using namespace std;


Item::Item(string nItemName, string nDescription)
{
	itemName = nItemName;
	description = nDescription;
}

string Item::getDescription()
{
	return description;
}

string Item::getItemName()
{
	return itemName;
}

void Item::setItemName(string nItemName)
{
	itemName = nItemName;
}

void Item::setDescription(string nDescription)
{
	description = nDescription;
}


Item::~Item()
{
}

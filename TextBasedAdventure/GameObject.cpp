#ifndef GameObject_h
#define GameObject_h
#include "GameObject.h"
#endif

#ifndef GameState_h
#define GameState_h
#include "GameState.h"
#endif

#include <string>
#include <iostream>
using namespace std;
/*
	Represents a basic game object, with a name and a description
*/

GameObject::GameObject(string nItemName, string nDescription)
{
	objectName = nItemName; //name of the object
	description = nDescription; //description for when the player looks at an entity
}

string GameObject::getDescription()
{
	return description;
}

string GameObject::getItemName()
{
	return objectName;
}

void GameObject::setItemName(string nItemName)
{
	objectName = nItemName;
}

void GameObject::setDescription(string nDescription)
{
	description = nDescription;
}


/*
displays the description of the object when the player types "look at [objectName]"
*/
void GameObject::look()
{
	cout << description << '\n';
}
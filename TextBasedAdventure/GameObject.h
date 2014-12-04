
#include <string>

using namespace std;
class GameObject
{
protected:
	string objectName;
	string description;

public:
	GameObject(string sName, string sDescription);
	string getItemName();
	string getDescription();
	void setItemName(string nName);
	void setDescription(string nDescription);
	void look();
};


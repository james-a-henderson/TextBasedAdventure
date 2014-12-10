#include <vector>
#include <string>

using namespace std;
class GameObject
{
protected:
	string objectName;
	string description;
	vector<string> callStrings;

public:
	GameObject(string sName, string sDescription, vector<string> sCallStrings);
	string getItemName();
	string getDescription();
	vector<string> getCallStrings();
	void setItemName(string nName);
	void setDescription(string nDescription);
	void look();
};


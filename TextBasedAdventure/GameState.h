using namespace std;

class GameState
{
private: bool exit; //default false

public:
	GameState();
	bool getExit();
	void setExit(bool nExit);
};
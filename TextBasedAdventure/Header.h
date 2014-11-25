using namespace std;

class GameState
{
private: bool exit;

public:
	GameState();
	bool getExit();
	void setExit(bool nExit);
};
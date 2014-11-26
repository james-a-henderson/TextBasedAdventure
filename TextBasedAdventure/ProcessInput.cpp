#include <string>
#include <iostream>
#include "GameState.h"
#include <boost/algorithm/string.hpp>
#include <vector>
using namespace std;


//Processes input

/*
When processing an input,
use this format for checking if a specific word was inputted:

else if(boost::iequals(inputVec.at(wordNum), word)

where wordNum is the specific word needing to be processed
(0 for first word, 1 for second word, ect)
and word is the word that the input is being checked against
**exception: use only if specific case doesn't matter. If case does matter, use:
else if(inputVec.at(wordNum) == word)


*/

void processInput(string input, GameState * game)
{
	//Splits each word in the input string into a seperate string,
	//which are then stored in the vector inputVec.
	vector<string> inputVec;
	boost::split(inputVec, input, boost::is_any_of(" "), boost::token_compress_off);

	//Exits game if input is exit (ignoring case).
	if (boost::iequals(inputVec.at(0), "exit"))
	{
		game->setExit(true);
	}

	else if (boost::iequals(inputVec.at(0), "jump"))
	{
		if (inputVec.size() == 1)
			cout << "You jump in place\n";
		else if (inputVec.size() > 2)
		{
			cout << "You can jump, but not ";
			for (int i = 1; i < inputVec.size(); i++)
				cout << inputVec.at(i) << ' ';

			cout << "style\n";
		}
		else if (boost::iequals(inputVec.at(1), "up"))
			cout << "You jump straight up.\n";
		else if (boost::iequals(inputVec.at(1), "down"))
			cout << "You jump straight down to your death.\n";
		else
			cout << "You do not know how to jump " << inputVec.at(1) << " style.\n";
	}
	//default case. If input does not match any specific case, this executes.
	else
	{
		//prints out statement and input
		cout << "You do not know how to " << input << '\n';
	}
}
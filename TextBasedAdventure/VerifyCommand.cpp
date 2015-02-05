#include <string>
#include <vector>
using namespace std;
#include <boost/algorithm/string.hpp>

/*
Checks the user's input with a specified command

returns true if the input is correct(ignoring case),
false otherwise
*/
bool verifyCommand(string command, vector<string> * inputVec)
{
	//splits each word in command into a seperate string
	//then stores them in commandVec
	vector<string> commandVec;
	boost::split(commandVec, command, boost::is_any_of(" "), boost::token_compress_off);
	
	//command and input do not have the same number of words
	if (commandVec.size() != inputVec->size())
		return false;
	else
	{
		//checks if each word matches
		//if not, return false
		for (int i = 0; i < commandVec.size(); i++)
		{
			if (!boost::iequals(commandVec.at(i), inputVec->at(i)))
				return false;
		}

		return true;
	}
}


bool verifyCommand(string command, vector<string>* inputVec, int start, int end)
{
	//if the start and end values are invalid
	if (start > end || start >= inputVec->size() || end < 0)
		return false;
	
	//splits each word in command into a seperate string
	//then stores them in commandVec
	vector<string> commandVec;
	boost::split(commandVec, command, boost::is_any_of(" "), boost::token_compress_off);

	if (commandVec.size() != (end - start + 1))
		return false;
	else
	{
		for (int i = 0; i < commandVec.size(); i++)
		{
			if (!boost::iequals(commandVec.at(i), inputVec->at(i + start)))
				return false;
		}

		return true;
	}
}

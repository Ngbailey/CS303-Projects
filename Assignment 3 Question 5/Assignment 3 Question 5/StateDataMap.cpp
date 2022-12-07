
#include "StateDataMap.h"

int main() {
	string stateName;
	string captialName;
	map<string, string> StateDataMap;
	StateDataMap.insert(pair<string, string>("Nebraska", "Lincoln"));
	StateDataMap.insert(pair<string, string>("New York", "Albany"));
	StateDataMap.insert(pair<string, string>("Ohio", "Columbus"));
	StateDataMap.insert(pair<string, string>("California", "Sacramento"));
	StateDataMap.insert(pair<string, string>("Massachusetts", "Boston"));
	StateDataMap.insert(pair<string, string>("Texas", "Austin"));

	output_of_map(StateDataMap); 

	StateDataMap["California"] = "Los Angelese";

	cout << "Please enter the name of the State you want to know the Capital of:\n";
	string userInput;
	cin >> userInput;
	StateName(StateDataMap, userInput);
}



#include <set>
#include <utility>
#include <string>
#include <map>
#include <iostream>
#include <iterator>
using namespace std;

/**		outputs the inputed map into two columns, one with the "Key" or State name, and the other with the "definition" or Captial name.
*
*/

void output_of_map(map<string, string> MapInput) {
	map<string,string>::iterator itr;
	cout << "The State Data Map: \n";
	cout << "\tState Name\tCapital Name\n";
	for (itr = MapInput.begin(); itr != MapInput.end(); ++itr) {
		cout << '\t' << itr->first << '\t' << itr->second << '\n';
	}
	cout << endl;
}
/**		outputs the name of the capital corresponding to the inputed state name if it is in the State Data Map.
*/
void StateName(map<string,string> MapInput, string userInput) {
	cout << "\n" << MapInput[userInput] << endl;
}
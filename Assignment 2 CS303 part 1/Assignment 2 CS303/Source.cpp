//Nathan Gregorian Bailey
//Assignment # 2 Part 2
//Created October 12th 2022, 4:24PM
//Due October 18th 2022, Midnight.

#include <iostream>
#include "Header.h"
#include <cstring>

using namespace std;

int main()
{
	int checker = -1;
	string userInput;
	while (checker == -1) {
		string userChoice = "N/A";
		int checker2 = -1;
		string testfile;
		cout << "Please enter filename\n" << endl;
		cin >> testfile;
		while (userChoice == "N/A") {
			cout << "Please enter a command\n'c' to find and count the number of a specific positive integer.\n'm' to modify a specific integer into another value.\n'a' to add a specific integer to the end of the array.\n'r' to input an index of an array and remove the integer at that index\n" << endl;
			cin >> userChoice;
			if (userChoice == "c" || userChoice == "C") {
				FindInteger(testfile);
				break;
			}
			if (userChoice == "m" || userChoice == "M") {
				ModFile(testfile);
				break;
			}
			if (userChoice == "a" || userChoice == "A") {
				AddToFile(testfile);
				break;
			}
			if (userChoice == "r" || userChoice == "R") {
				RemoveFromFile(testfile);
				break;
			}
			else {
				cout << "Invalid Input\n";
				userChoice = "N/A";
			}
		}
		checker == 0;
		while (checker2 == -1) {
			cout << "\nContinue?(Y/N)" << endl;
			cin >> userInput;
			if (userInput == "y" || userInput == "Y") {
				checker = -1;
				break;
				cout << userInput << endl;
			}
			else if (userInput == "n" || userInput == "N") {
				checker = 0;
				checker2 = 0;
				cout << "Exiting Program" << endl;
			}
			else {
				checker = -1;
				checker2 = -1;
				cout << "Invalid command try again\n";
			}
		}
	}
}
#pragma once

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void FileChecker() 
{
	ifstream inStream;
	ofstream outStream;
	const int Length = 10;
	int Array[Length];
	string filename;
	int lineNumber = 0;
	int SearchNumber;
	string userInputer;
	string userRepeat;
	int WhileChecker = -1;
	cout << "Please enter the file's name" << endl;
	cin >> filename;
	while (WhileChecker == -1)
	{
		int NumOcc = 0;
		inStream.open(filename);
		if (inStream.fail())
		{
			cout << "Input file opening failed\nPlease try again.\n" << endl;
			cin >> filename;
		}
		else {
			cout << "Please enter a command\n'c' to find and count the number of a specific positive integer.\n'm' to modify a specific integer into another value.\n'a' to add a specific integer to the end of the array.\n'r' to input an index of an array and remove the integer at that index\n" << endl;
			cin >> userInputer;
			if ("c" == userInputer) {
				cout << "Please enter the integer you want to find\n" << endl;
				cin >> SearchNumber;



				while (!inStream.eof()) {
					int j = 0;

					lineNumber++;
					for (int i = 0; i < Length; ++i)
					{
						j++;
						inStream >> Array[i];
						if (SearchNumber == Array[i])
						{

							cout << "Found integer in the row " << lineNumber << " array, at index " << i << endl;
							NumOcc++;
						}
						if (j == 10)
						{
							cout << endl;
						}
					}
					if (inStream.eof())
					{
						if (NumOcc > 0)
						{
							
							cout << "Found the number " << NumOcc << " times within the file\n" << endl;
						}
						else
						{
							cout << "Number wasn't found in file\n" << endl;
						}
						cout << "Would you like to do anything else? (Y/N)\n" << userInputer << endl;
						cin >> userRepeat;
						if (userRepeat != "Y" || userRepeat != "y")
						{
							WhileChecker = 0;
						}
					}
				}
			}
			else if (userInputer == "m")
			{
				inStream.close();
				cout << "Please enter the index you wish to modify\n";
				int modArray = -1;
				cin >> modArray;
				cout << "Please enter which array in the file from 1 to 10 you want to modify\n";
				int whichArray = -1;
				cin >> whichArray;
				cout << "And finally what do you want to change the interger value to? (Please enter an integer)\n";
				int replacedInt;
				cin >> replacedInt;
				inStream.open(filename);
				while (!inStream.eof()) {
					int j = 0;
					lineNumber++;
					for (int i = 0; i < Length; ++i)
					{
						j++;
						inStream >> Array[i];
						if (Array[modArray] == Array[i] && lineNumber == whichArray)
						{
							int oldNumber = Array[i];
							Array[i] = replacedInt;
							cout << "Old Number was " << oldNumber << endl;
							cout << "New Number is " << Array[i];
							outStream << Array[i];
						}
						if (j == 10)
						{
							cout << endl;
						}
					}
					if (inStream.eof())
					{
						cout << "Would you like to do anything else? (Y/N)\n" << userInputer << endl;
						cin >> userRepeat;
						if (userRepeat != "Y" || userRepeat != "y")
						{
							WhileChecker = 0;
						}
					}
				}
			}
			else if (userInputer == "a")
			{

			}
			else if (userInputer == "r")
			{

			}
			else
			{
				cout << "Couldn't understand command please try again\n" << endl;
				WhileChecker = -1;
			}
		}
	}
	inStream.close();
	
};
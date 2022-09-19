#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <string>

using namespace std;

/**		Find the integer within the file based on 10 possible arrays with the array having 10 elements not including the white space.
*		@param searchterm input the term you want to search for within the file.
*		@return which array and which index is found the term in, will return all instances of the term found not just the first one.
*/

void FindInteger(string filename) {
	ifstream inStream;
	const int length = 10;
	int A[length];
	int searchterm;
	int numLocated = 0;
	int FileOpenCheck = 0;
	int ArrayNumber = 1;
	inStream.open(filename);
	if (inStream.fail()) {
		cout << "Failure" << endl;
		FileOpenCheck = -1;
	}
	if (FileOpenCheck == 0) {
		cout << "Please enter a search term" << endl;
		cin >> searchterm;
	}
	while (!inStream.eof() && FileOpenCheck == 0) {
		int j = 0;
		for (int i = 0; i < length; ++i) {
			j++;
			inStream >> A[i];
			if (searchterm == A[i]) {
				numLocated++;
				cout << " Match Found at Index " << i << " in Array #" << ArrayNumber << endl;
			}
			if (j == 10) {
				ArrayNumber++;
			}
			if (inStream.eof()) {
				if (numLocated == 0) {
					cout << "Could not find integer in this file.\n";
				}
			}

		}
	}
	inStream.close();
}


/**		Allows you to modify one of the elements within the 10 arrays and will inform you what the origina element was and what you changed it to.  I twill also overrite the original file and replace it with the updated elements.
*		@param modArray which index you want to change.
*		@param whichArray which of the array's you want to change.
*		@param replacedInt what the new element in the choosen array and index location will be
*		@return what the original element at the modify location was and what the new element is at the modified location.
*/

void ModFile(string filename) {
	ifstream inStream;
	ofstream outStream;
	string line;
	const int length = 10;
	string a[length];
	int FileOpenCheck = 0;
	int lineNumber = 0;
	inStream.open(filename);
	if (inStream.fail()) {
		cout << "In Stream Failure" << endl;
		FileOpenCheck = -1;
	}
	outStream.open("COTF.txt");
	if (outStream.fail()) {
		cout << "Out Stream Failure" << endl;
		FileOpenCheck = -1;
	}
	while (!inStream.eof() && FileOpenCheck == 0) {

		cout << "Please enter the index you wish to modify\n";
		int modArray = -1;
		cin >> modArray;
		cout << "Please enter which array in the file from 1 to 10 you want to modify\n";
		int whichArray = -1;
		cin >> whichArray;
		cout << "And finally what do you want to change the interger value to? (Please enter an integer)\n";
		string replacedInt;
		cin >> replacedInt;
		if (inStream && outStream) {
			while (!inStream.eof()) {
				int j = 0;
				lineNumber++;
				for (int i = 0; i < length; ++i)
				{
					j++;
					inStream >> a[i];
					if (a[modArray] == a[i] && lineNumber == whichArray)
					{
						string oldNumber = a[i];
						a[i] = replacedInt;
						cout << "Old Number was " << oldNumber << endl;
						cout << "New Number is " << a[i] << endl;
						outStream << a[i] << " ";
					}
					else {
						outStream << a[i] << " ";
					}
					if (i == 9) {
						outStream << endl;
					}
				}
			}

		}
		else {
			cout << "Something went wrong." << endl;
		}
	}
	inStream.close();
	outStream.close();
	inStream.open("COTF.txt");
	if (inStream.fail()) {
		cout << "In Stream Failure" << endl;
		FileOpenCheck = -1;
	}
	outStream.open(filename);
	if (outStream.fail()) {
		cout << "Out Stream Failure" << endl;
		FileOpenCheck = -1;
	}
	while (!inStream.eof() && FileOpenCheck == 0) {
		if (inStream && outStream) {
			while (!inStream.eof()) {
				int j = 0;
				lineNumber++;
				for (int i = 0; i < length; ++i)
				{
					j++;
					inStream >> a[i];
					outStream << a[i] << " ";
					if (i == 9) {
						outStream << endl;
					}

				}
			}
		}
	}
}

/**		Allows you to change what the last element in the array is.
*		@param whichArray which of the array's you want to add to the end of.
*		@param replacedInt what element you want to add to the end of the array.
*		@return this function won't return anything but it will change the last element of the chosen array.
*/


void AddToFile(string filename) {
	ifstream inStream;
	ofstream outStream;
	string line;
	const int length = 10;
	string a[length];
	int FileOpenCheck = 0;
	int lineNumber = 0;
	inStream.open(filename);
	if (inStream.fail()) {
		cout << "In Stream Failure" << endl;
		FileOpenCheck = -1;
	}
	outStream.open("COTF.txt");
	if (outStream.fail()) {
		cout << "Out Stream Failure" << endl;
		FileOpenCheck = -1;
	}
	while (!inStream.eof() && FileOpenCheck == 0) {

		cout << "Please enter which array in the file from 1 to 10 you want to add to.\n";
		int whichArray = -1;
		cin >> whichArray;
		cout << "What integer do you want to add to the end of the array?\n(WARNING)This will replace the current integer at the end of the Array!!\n(Please enter an integer)\n";
		string replacedInt;
		cin >> replacedInt;
		if (inStream && outStream) {
			while (!inStream.eof()) {
				int j = 0;
				lineNumber++;
				for (int i = 0; i < length; ++i)
				{
					j++;
					inStream >> a[i];
					if (lineNumber == whichArray && i == 9)
					{
						a[i] = replacedInt;
						outStream << a[i] << " ";
					}
					else {
						outStream << a[i] << " ";
					}
					if (i == 9) {
						outStream << endl;
					}
				}
			}

		}
		else {
			cout << "Something went wrong." << endl;
		}
	}
	inStream.close();
	outStream.close();
	inStream.open("COTF.txt");
	if (inStream.fail()) {
		cout << "In Stream Failure" << endl;
		FileOpenCheck = -1;
	}
	outStream.open(filename);
	if (outStream.fail()) {
		cout << "Out Stream Failure" << endl;
		FileOpenCheck = -1;
	}
	while (!inStream.eof() && FileOpenCheck == 0) {
		if (inStream && outStream) {
			while (!inStream.eof()) {
				int j = 0;
				lineNumber++;
				for (int i = 0; i < length; ++i)
				{
					j++;
					inStream >> a[i];
					outStream << a[i] << " ";
					if (i == 9) {
						outStream << endl;
					}

				}
			}
		}
	}
}

/**		Allows you to remove a element from a specific index in the Array and the removed element is replaced with a place holder element labled as "Removed"
*		@param modArray what index in the array you want to remove
*		@param whichArray which of the array's do you want to have the choosen indexed removed from.
*		@param replacedInt provides the placeholder term "Removed" in the location of the removed element.
*		@return this function will tell you which element was removed and from which Array and index location.
*/

void RemoveFromFile(string filename) {
	ifstream inStream;
	ofstream outStream;
	string line;
	const int length = 10;
	string a[length];
	int FileOpenCheck = 0;
	int lineNumber = 0;
	inStream.open(filename);
	if (inStream.fail()) {
		cout << "In Stream Failure" << endl;
		FileOpenCheck = -1;
	}
	outStream.open("COTF.txt");
	if (outStream.fail()) {
		cout << "Out Stream Failure" << endl;
		FileOpenCheck = -1;
	}
	while (!inStream.eof() && FileOpenCheck == 0) {

		cout << "Please enter the index of the number you wish to remove\n";
		int modArray = -1;
		cin >> modArray;
		cout << "Please enter which array in the file from 1 to 10 you want to have said index removed from.\n";
		int whichArray = -1;
		cin >> whichArray;
		string replacedInt = "Removed";
		if (inStream && outStream) {
			while (!inStream.eof()) {
				int j = 0;
				lineNumber++;
				for (int i = 0; i < length; ++i)
				{
					j++;
					inStream >> a[i];
					if (a[modArray] == a[i] && lineNumber == whichArray)
					{
						string oldNumber = a[i];
						a[i] = replacedInt;
						cout << "Number being removed is " << oldNumber <<  " from Array #" << whichArray << "Index " << i << endl;
						outStream << a[i] << " ";
					}
					else {
						outStream << a[i] << " ";
					}
					if (i == 9) {
						outStream << endl;
					}
				}
			}

		}
		else {
			cout << "Something went wrong." << endl;
		}
	}
	inStream.close();
	outStream.close();
	inStream.open("COTF.txt");
	if (inStream.fail()) {
		cout << "In Stream Failure" << endl;
		FileOpenCheck = -1;
	}
	outStream.open(filename);
	if (outStream.fail()) {
		cout << "Out Stream Failure" << endl;
		FileOpenCheck = -1;
	}
	while (!inStream.eof() && FileOpenCheck == 0) {
		if (inStream && outStream) {
			while (!inStream.eof()) {
				int j = 0;
				lineNumber++;
				for (int i = 0; i < length; ++i)
				{
					j++;
					inStream >> a[i];
					outStream << a[i] << " ";
					if (i == 9) {
						outStream << endl;
					}

				}
			}
		}
	}
}

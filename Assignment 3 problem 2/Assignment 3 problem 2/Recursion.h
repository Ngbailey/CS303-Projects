#pragma once
#include <string>
#include <iostream>

using namespace std;
/**		tests the users input to see if it is a palindrome, any sized user input can be used. except for a none input, something must be entered, at least one character.
*		@param char string[] is the users input
*		@param int a and b are the min and max indexes for the users input to compare each char in the string.
*		@returns true if Palindrom else returns false.
*
*/

bool palindrome_test(char string[], int a, int b) {

	if (a == b)
		return true;
	if (string[a] != string[b])
		return false;
	if (a !=b)
		return palindrome_test(string, a + 1, b - 1);
	return true;
}
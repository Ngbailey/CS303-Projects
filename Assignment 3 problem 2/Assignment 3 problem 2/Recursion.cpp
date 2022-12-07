#include "Recursion.h"

/**		@param UserStringLength is to set the max length for the string index.
*		
* 
*/

int main()
{
	char UserString[] = "";
	cout << "Please enter a word to see if it is a palindrome." << endl;
	cin >> UserString;
	int UserStringLength = strlen(UserString);
	cout << UserStringLength << endl;
	if (UserStringLength == 0)
		cout << "This is a palindrom" << endl;
	else
		if (palindrome_test(UserString,0,UserStringLength-1))
			cout << "This is a palindrome!" << endl;
		else
			cout << "This isn't a palindrom!" << endl;
	return 0;
}

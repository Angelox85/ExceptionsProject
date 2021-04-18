// Name : Angel E Hernandez
// Date : April 17
// CIS 1202.800
// Project name : Inheritance


#include <iostream>
#include <string>
#include <cstring>
#include <cctype>  // to use character testing functions for c-string
using namespace std;

// Function prototype
char character(char, int);
bool isCharacter(char);
// define enum to determine if letter is upper case, lower cae, or if is not a letter
enum CharCaseRange { upperCase, lowerCase, outOfRange };
CharCaseRange resolveChactCaseRange(char);


int main()
{
	char ch{};
	int off = 0;

	try
	{
		character('a', 1);
		//ch = character('?', 5);
		cout << "The character is " << ch << endl;
	}
	catch (string excpeption)
	{
		cout << excpeption;
	}

	system("pause");
	return 0;
}

char character(char start, int offset)
{

	if (!isCharacter(start))
	{
		string invalidCharacterExcpeption = " ERROR: Invalid character, try again.\n";
		throw invalidCharacterExcpeption;
	}
	// check if start is lower or upper case
	CharCaseRange beforeOffsetCharCaseRange = resolveChactCaseRange(start);

	start += offset;
	// check if character after offset
	if (!isCharacter(start)) {
		string invalidRangeException = " ERROR: The character is not in the range, try again.\n";
		throw invalidRangeException;
	}
	// check if char is upper or lower case after offset
	CharCaseRange afterOffsetCharCaseRange = resolveChactCaseRange(start);

	// check uppercase/lowercase transition
	if (afterOffsetCharCaseRange != beforeOffsetCharCaseRange) {
		string caseTranstNotAllowed = " ERROR: Case transition not allowed, try again.\n";
		throw caseTranstNotAllowed;
	}

	return start;


}
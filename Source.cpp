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
//============================================================================
// Name        : Hello.cpp
// Author      : Mircea Caprioru
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int Sum (int a, int b)
{
	return a+b;
}


int main() {
	int var;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	cout << Sum(4,5);

	var = Sum(7,8);

	return 0;
}

// Programmer: Teepu Khan
// Date: 9.14.2017
// Class: dsCh1Exercise.cpp
// Book: Data Structures in C++ by Timothy Budd
// Exercise: 1.9
//
// Description: This program simply prints all n, n^2 and n^3 values for integers from
// 0 all the way to 100.

#include <iostream>
using namespace std;

int main()
{
	cout << "The following will print the values of n, n^2 and n^3 for integers 0 through 100.\n\n";
	for (int i = 0; i < 100; i++)
	{
		cout << "n = " << i << "...n^2 = " << i * i << "...n^3 = " << i * i * i << endl;
	}

    return 0;
}

// Programmer: Teepu Khan
// Date: 10.24.2017
// Class: dsCh2Exercise.cpp
// Book: Data Structures in C++ by Timothy Budd
// Exercise: 2.11
//
// Description: This program creates a counter class that wraps back to zero
// once the maximum value is reached and vice versa when decrementing. The main
// function is used for testing.

#include <iostream>
using namespace std;

class counter
{
public:
	counter();
	counter(int begin, int maximum);
	void increment();
	void decrement();
	int getter();

private:
	int count;
	int max;
};

// Default constructor.
counter::counter()
{
	count = 0;
	max = 17;
}

// Constructor that allows you to put in a starting point for the counter
// and a maximum value for the counter.
counter::counter(int begin, int maximum)
{
	max = maximum;
	if (begin > maximum)
	{
		cout << "You input an invalid value to begin. Set to default.";
		count = 0;
	}
	else
	{
		count = begin;
	}
}

// Increments counter by one. If counter would exceed max, then goes to 0.
void counter::increment()
{
	if (count == max)
	{
		count = 0;
	}
	else
	{
		count++;
	}
}

// Decrements counter by one. If counter we go below 0, then goes to max.
void counter::decrement()
{
	if (count == 0)
	{
		count = max;
	}
	else
	{
		count--;
	}
}

// Getter for counter value.
int counter::getter()
{
	return count;
}



int main()
{
	counter test;

	// Test for increment.
	cout << "\nIncrement counter 20 times:\n";
	for (int i = 0; i < 20; i++)
	{
		test.increment();
		cout << test.getter() << "\n";
	}

	// Test for decrement.
	cout << "\nDecrement counter 20 times:\n";
	for (int j = 20; j > 0; j--)
	{
		test.decrement();
		cout << test.getter() << "\n";
	}
}

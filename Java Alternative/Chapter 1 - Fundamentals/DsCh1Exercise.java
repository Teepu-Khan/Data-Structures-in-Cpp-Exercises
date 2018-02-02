// Programmer: Teepu Khan
// Date: 12.26.2017
// Class: DsCh1Exercise.cpp
// Book: Data Structures in C++ by Timothy Budd
// Exercise: 1.9
//
// Description: This program simply prints all n, n^2 and n^3 values for integers from
// 0 all the way to 100. This solution was originally in C++, but is now presented in Java.

//package dsch1exercise;

public class DsCh1Exercise
{
    public static void main(String [] args)
    {
        System.out.println("The following will print the values of n, n^2 and n^3 for integers 0 through 100.\n");
        
        for (int i = 0; i < 100; i++)
	{
            System.out.println("n = " + i + "...n^2 = " + (i * i) + "...n^3 = " + (i * i * i));
	}
    }
}

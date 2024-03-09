// random numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

//a program that generates 10 random numbers

using namespace std;

int main()
{
	int random;
	int sumEven = 0;
	int sumOdd = 0;
	for (int i = 0; i <= 10;i++)
	{
		//generate random numbers
		random = (0 + rand() % (10 - 0 + 1));
		cout << random << " " << endl;

		//add even numbers
		if (random % 2 == 0)
		{
			//add all even numbers 
			sumEven += random;

		}
		else
		{
			//add all odd numbers 
			sumOdd += random;
		}
	}
	//display the total of all even and odd numbers 
	cout << "The sum of all even numbers is : " << sumEven << endl;
	cout << "The sum of all odd numbers is : " << sumOdd << endl;
		_getch();
		return 0;
}

//Author: Cristian Cuevas.

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int arraySum(int numbers[], int size) {
	if (size <= 0)
		return 0;
	return (numbers[size-1] + arraySum(numbers, size - 1));
}

int Multiplication(int x, int y) {
	if (y <= 0)
		return 0;
	return x + Multiplication(x, y - 1);
}

int Power(int x, int power) {
	if (power == 0)
		return 1;
	return x * Power(x,power-1);
}

int main()
{
	int *numArray = NULL;
	int choice, size, numOne, numTwo;

	do
	{
	cout << "Choose 1 option: " << endl;
	cout << "1)Array Sum \n";
	cout << "2)Array Multiplication\n";
	cout << "3)Array Power\n";
	cout << "4)Exit\n";
	cin >> choice;

	

	
	switch (choice)
	{

	case 1:
		cout << "How many numbers do you want to sum?\n";
		cin >> size;
		numArray = new int[size];
		cout << "Enter " << size << " numbers in the array:\n";
		for (int i = 0; i < size; i++)
		{
			cin >> numArray[i];
		}
		cout << " The sum is: " << arraySum(numArray, size) << endl;
		break;
	case 2:
		cout << "Enter 2 numbers to multiply: \n";
		cout << "Enter number 1: ";
		cin >> numOne;
		cout << "Enter number 2: ";
		cin >> numTwo;
		cout << "Multiplication: " << Multiplication(numOne, numTwo) << "\n";
		break;

	case 3:
		cout << "Enter the number you want to increase the power of: \n";
		cin >> numOne;
		cout << "Enter by what exponent you want to increase it:\n ";
		cin >> numTwo;
		cout << "The power of " << numOne << " is: " << Power(numOne, numTwo) << endl;
		break;
	case 4:

		cout << "***PROGRAM EXITED***\n";
		return 0;

	default:
		cout << "Wrong value, enter a valid one" << endl;
		main();
		cout << endl;
		break;
	}
	} while (choice!=4);
}
// FactorialNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int main()
{
	int chosenNumber = 0;
	int factorialResult = 0;

	cout << "Please input a positive number " << "\n" ;
	cin >> chosenNumber;

	cout << "number " << chosenNumber << "\n";
	
	if (chosenNumber >= 1)
	{
		factorialResult = 1;
		for (int start = chosenNumber; start >= 1; start--)
		{
			//cout << "factorial " << factorialResult << " start " << start << "\n";
			factorialResult = factorialResult * (start);
			//cout << "factorialresult " << factorialResult << "\n";
		}
	}

	cout << chosenNumber << "! = " << factorialResult << "\n";

	system("PAUSE");
    return 0;
}


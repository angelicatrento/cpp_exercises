// FrogJump.cpp : Defines the entry point for the console application.
//

/*
Count the minimal number of jumps that the small frog must perform to reach its target.

Write a function:

int solution(int X, int Y, int D);

that, given three integers X, Y and D, returns the minimal number of jumps from position X to a position equal to or greater than Y.
*/

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

int solution(int X, int Y, int D);

int main()
{
	int result;
	result = solution(1, 1000000000, 1);

	cout << " # of Jumps " << result << "\n";
	system("PAUSE");
    return 0;
}

int solution(int X, int Y, int D) {
	// write your code in C++14 (g++ 6.2.0)

	long int value2 = ((Y - X) / (double)D);
	return value2;
}

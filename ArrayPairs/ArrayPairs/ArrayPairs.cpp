// ArrayPairs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <set>
using namespace std;

int solution(vector<int> &A);

int main()
{
	vector<int> A = { 1,1 };//= {1,1,2,2,3,4,4,3,5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,7,8,8,9,9,0,0,5,42,21,21,23,24,23,24};
	//A = { 1,1 };
	int valueFound = solution(A);
	cout << " This is the alone element found in vector A " << valueFound << "\n";
	system("PAUSE");
	return 0;
}

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
	// write your code in C++14 (g++ 6.2.0)
	int size = A.size();
	set<int> values;
	//int aloneElement;

	for (auto i: A)
	{
		if (values.find(i) == values.end())
		{
			values.insert(i);
		}
		else
		{
			values.erase(i);
		}
	}
	return *values.begin();
}
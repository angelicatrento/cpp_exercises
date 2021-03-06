// VectorRotation.cpp : Defines the entry point for the console application.
//
//input: vector<int> A and int K 
//	A -> vector of integers
//	K -> how many positions to rotate
//example:
//	A = { 3, 8, 9, 7, 6 };
//	K = 2;
//	result (after rotation) = { 7, 6, 3, 8, 9 }

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;
vector<int> solution(vector<int> &A, int K);
int main()
{
	vector<int> A,r;
	A = { 3, 8, 9, 7, 6 };
	r = solution(A, 2);

	for (auto i : A)
	{
		cout << " " << i;
	}
	cout << "\n New array \n";
	for (auto i : r)
	{
		cout << " " << i;
	}
	cout << "\n";
	system("PAUSE");
	return 0;
}

vector<int> solution(vector<int> &A, int K) {

	vector<int> rotatedVector;
	
	int arraySize = A.size();
	rotatedVector = vector<int>(arraySize);

	for (int i = 0; i < arraySize;i++) {
		int newPosition = (i + K) % arraySize;
		//cout << "\n OldPosition " << i << " value " << A[i] << " new Position " << newPosition;
		rotatedVector[newPosition] = A[i];
	}

	return rotatedVector;
}



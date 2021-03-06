// MissingNumber.cpp : Defines the entry point for the console application.
//

// Exercise:
/* An array A consisting of N different integers is given. The array contains integers in the range [1..(N + 1)], which means that exactly one element is missing.
	Write a function:

	int solution(int A[], int N);

	that, given an array A, returns the value of the missing element.

	For example, given array A such that:

	  A[0] = 2
	  A[1] = 3
	  A[2] = 1
	  A[3] = 5
	the function should return 4, as it is the missing element.

	Assume that:

	N is an integer within the range [0..100,000];
	the elements of A are all distinct;
	each element of array A is an integer within the range [1..(N + 1)].
 
*/

#include "stdafx.h"
#include <set>
#include <unordered_set>
#include <vector>
#include <iostream>

using namespace std;
int solution(vector<int> &A);

int main()
{
	vector<int> A = { 2,3,1,5 };
	cout << " Missing number " << solution(A) << "\n";
	vector<int> B = {1,2};
	cout << " Missing number " << solution(B) << "\n";
	system("PAUSE");
    return 0;
}

int solution(vector<int> &A) {
	// write your code in C++14 (g++ 6.2.0)

	int missingNumberFound = 0;
	set<int> values_expected;
	unordered_set<int> values_inserted;
	int maxValue = A.size() + 1;
	missingNumberFound = maxValue; // in case array is empty

	for (auto i : A)
	{
		values_inserted.insert(i);
		if (i > 1 && values_inserted.find(i - 1) == values_inserted.end())
			values_expected.insert(i - 1);

		if (i <= maxValue && values_inserted.find(i + 1) == values_inserted.end())
			values_expected.insert(i + 1);
		
		values_expected.erase(i);
	}
	if (!values_expected.empty()) {
		missingNumberFound = *values_expected.begin();
		values_expected.clear();
		values_inserted.clear();
	}
	return missingNumberFound;
}


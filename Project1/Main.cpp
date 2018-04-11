/********************************************

	Radix Sort
	Running time: O(n * k)

********************************************/

#include <iostream>
#include <string>
#include <string>

using namespace std;

const int CAP = 20;

void print(const int *a, int numOfElements);

int main()
{
	int digits = 3;
	int numOfElements = 15;
	
	int *a1 = new int[CAP] {789, 456, 123, 741, 852, 963, 321, 654, 987, 147, 258, 369, 159, 753, 111};
	int *a2 = new int[CAP];

	cout << "Start:  ";
	print(a1,numOfElements);
	cout << endl;

	/***********************************************************************************************************/
	// Your code ONLY in this section...

	// PRINT FROM HERE....
	/*
		Badajoz, Seve

		CS A200
		April 11, 2018

		Lab 5
	*/
	int numAdded = 0, j = 0, digit = 0, modBy = 1;
	int *movingPtr = nullptr;
	// O(n * k)
	// n is numOfElements and k is digits
	// We will always look at all k digits
	for (int i = 0; i < digits; ++i) { //looking at each digit
		modBy *= 10;
		numAdded = 0;
		j = 0;

		cout << "Pass " << (i + 1) << ": ";

		// O(10 * n) -> O(n)
		// n is numOfElements
		// Worst case scenario we look at all 10 digits(0-9)
		while(j < 10 && numAdded < numOfElements) { //looking at each number (0-9) until either each number is looked at or all elements have been moved
			// O(n)
			// n is numOfElements
			// Worst case scenario is we search the most significant figure in every element in the array for the number(0-9) 
			for (int elemNum = 0; elemNum < numOfElements; ++elemNum) { //looking at each element
				digit = a1[elemNum] % modBy;
				if (digit == j) { //if the digit we're viewing is the same as the number move the element over to a2
					a2[numAdded++] = a1[elemNum];
				}
			}
			++j;
		}
		print(a2, numOfElements);
		cout << endl;
		movingPtr = a1;
		a1 = a2;
		a2 = movingPtr;
	}
	a2 = a1;
	
	
	

	// END PRINTING HERE... 

	/***********************************************************************************************************/

	cout << endl << endl;
	system("Pause");
	return 0;
}

void print(const int *a, int numOfElements)
{
	for (int i = 0; i < numOfElements; ++i)
		cout << a[i] << " ";
}
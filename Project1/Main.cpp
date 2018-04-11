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
		(name header)
	*/

	

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
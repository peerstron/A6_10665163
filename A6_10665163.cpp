#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	// the no of elements you want
	int indexList;
	cout << "Please enter the number of list you want to enter: ";
	cin >> indexList;
	cout << endl;

	int *a = new int[indexList];
	// enter the numbers

	for (int i = 0; i < indexList; ++i)
	{
		cout << "Please enter number " << i+1 << ": ";
		cin >> a[i];
	}

// sort the numbers
	int tempNo;

	for (int i = 0; i < indexList; ++i)
	{
		for (int j = 0; j < indexList-1; ++j)
		{
			if (a[j] > a[j+1])
			{
				tempNo = a[j+1];
				a[j+1] = a[j];
				a[j] = tempNo;
			}
		}
	}

// output the sorted numbers
	cout << "The numbers are: ";
	for (int i = 0; i < indexList; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	// searching for the needle
	int needle;
	cout << "Please enter the number you are looking for: ";
	cin >> needle;
	cout << endl;

// declaring variables for the index of the first number, the middle and the last
	int firstNo = 0;
	int lastNo = indexList-1;
	int middleNo;
	int result;
	bool found = false;

// checking for equality
	while( (firstNo <= lastNo) && found != true) {

		middleNo = (firstNo + lastNo) / 2;

		if (a[middleNo] == needle)
		{
			found = true;
			break;

		} else
		if (needle < a[middleNo])
		{
			lastNo = middleNo - 1;
		} else
		if (needle > a[middleNo])
		 {
		 	/* code */
		 } 
			firstNo = middleNo + 1;
	}

// output the position of the needle 
	if (found)
	{
		cout << needle << " found at position "<< middleNo + 1 << endl;
	} else {
		cout << needle << " not found\n";
	}

	return 0;
}
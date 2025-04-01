#include <iostream>

using namespace std;

int main()
{
	int MaxCount = 0;

	cin >> MaxCount;

	for (int j = 0; j < MaxCount; ++j)
	{
		for (int i = 0; i < j + 1; ++i) // ÇÑÁÙÂï±â
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int j = 0; j < MaxCount; ++j)
	{
		for (int i = 0; i < MaxCount - j; ++i) // ÇÑÁÙÂï±â
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int j = 0; j < MaxCount; ++j)
	{
		for (int i = 0; i < j ; ++i) // ÇÑÁÙÂï±â
		{
			cout << " ";
		}
		for (int i = 0; i < MaxCount - j; ++i) // ÇÑÁÙÂï±â
		{
			cout << "*";
		}
		cout << endl;
	}

	//*****
	// ****
	//  ***
	//   **
	//    *


	return 0;
}

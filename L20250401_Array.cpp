#include <iostream>

using namespace std;

int main()
{
	int MaxCount = 0;

	cin >> MaxCount;

	for (int j = 0; j < MaxCount; ++j)
	{
		for (int i = 0; i < j + 1; ++i) // �������
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int j = 0; j < MaxCount; ++j)
	{
		for (int i = 0; i < MaxCount - j; ++i) // �������
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int j = 0; j < MaxCount; ++j)
	{
		for (int i = 0; i < j ; ++i) // �������
		{
			cout << " ";
		}
		for (int i = 0; i < MaxCount - j; ++i) // �������
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

#include <iostream>

using namespace std;

int main()
{
	int Inventory[10] = { 0, };

	int Map[10][10] =
	{
		{0,},
		{0,},
		{0,},
	};

//  	--->
//      |
//	    |
//	    v
	bool IsRunning = true;

	char Key = 0;
	while (IsRunning)
	{
		cin >> Key;

		//Process
		//==, !=, >, <, <=, >=
		if (Key == 'Q')
		{
			IsRunning = false;
		}

		//Render
		cout << "�𿩶� ��������. �����̸� �״´�." << endl;
	}




	return 0;
}

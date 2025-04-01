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
		cout << "모여라 사진찍자. 움직이면 죽는다." << endl;
	}




	return 0;
}

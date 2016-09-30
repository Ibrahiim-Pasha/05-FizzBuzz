/*************************************************
				 05 FizzBuzz
	  - This program for : FizzBuzz.
	  - Author : Ibrahim Mohamed Abdul-Meged.
			   : facebook.com/Ibrahiim.Pasha
			   : github.com/Ibrahiim-Pasha
	  - Date : 30/9/2016 - 6:18 AM

*************************************************/

#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << endl;
	cout << "Enter the number between 1 and : ";
	cin >> num;

	while (num < 1)
	{
		cout << "Wrong number must not be less than 1\n\n";
		cin >> num;
	}

	cout << endl;
	for (int i = 1; i <= num; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			cout << "FizzBuzz" << "\t" << endl << endl;
		}

		else if (i % 3 == 0)
		{
			cout << "Fizz" << "\t";
		}
		else if (i % 5 == 0)
		{
			cout << "Buzz" << endl << endl;
		}
		else
		{
			cout << i << "\t";
		}
	}
	cout << endl << endl;

	system("PAUSE");
	return 0;
}
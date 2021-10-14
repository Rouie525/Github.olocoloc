//Name: Kenn Rouie Oloc-oloc
//Activity Name: PT1
//Description: Performance Task 1
//Date: October 11, 2021

#include <iostream>
#include <array>

using namespace std;
int main()
{
int range;
int a,b,c,d,e;

cout << "\nEnter Range of Numbers: ";
cin >> range;

if(range == 5)

    cout << "\nEnter Five Consecutive Numbers";
    cout << "\nEnter First Number:  ";
    cin >> a;
    cout << "\nEnter Second Number: ";
    cin >> b;
    cout << "\nEnter Third Number:  ";
    cin >> c;
    cout << "\nEnter Fourth Number: ";
    cin >> d;
    cout << "\nEnter Fifth Number:  ";
    cin >> e;

    if (a % 2 == 0 )
		{
			cout << a << " - Even Number.\n";
		}
		else
		{
			cout << a << " - Odd Number.\n";
		}

		if (b % 2 == 0 )
		{
			cout << b << "- Even Number.\n";
		}
		else
		{
			cout << b << " - Odd Number.\n";
		}

		if (c % 2 == 0 )
		{
			cout << c << " - Even Number.\n";
		}
		else
		{
			cout << c << " - Odd Number.\n";
		}

		if (d % 2 == 0 )
		{
			cout << d << " - Even Number.\n";
		}
		else
		{
			cout << d << " - Odd Number.\n";
		}

		if (e % 2 == 0 )
		{
			cout << e << " - Even Number.\n";
		}
		else
		{
			cout << e << " - Odd Number.\n";
		}
    


   return 0;
}
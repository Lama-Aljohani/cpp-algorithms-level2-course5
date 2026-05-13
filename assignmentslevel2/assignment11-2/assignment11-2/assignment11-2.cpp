#include <iostream>
using namespace std;
#include <string>

int ReadPositiveNumber(string Massege) {

	int Number = 0;
	do
	{
		cout << Massege << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

int ReverseNumber(int Number) {

	int Reminder = 0, Number2 = 0;
	while (Number > 0)

	{
		Reminder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Reminder;
	}
		return Number2;
	}
bool IsPalindromeNumber(int Number)
{
	return Number == ReverseNumber(Number);
}

int main()
{

	if (IsPalindromeNumber(ReadPositiveNumber("Please enter a positive number ?")))

		cout << "\n Yes, it is a Palindrome Number";
	else
		cout << "\n No ,it is Not a Palindrome Number";

		return 0;
	}

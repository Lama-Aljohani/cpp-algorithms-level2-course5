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

int SumOfDigits(int Number) {

	int  Sum = 0, Reminder = 0;

	while (Number > 0) {

		Reminder = Number % 10;
		Number = Number / 10;
		Sum = Sum + Reminder;

	}
	return Sum;
}

int main()
{
	cout << "\nSum Of Digits = "
		<< SumOfDigits(ReadPositiveNumber("Please enter a positive number?"))
		<< "\n";

	return 0;  
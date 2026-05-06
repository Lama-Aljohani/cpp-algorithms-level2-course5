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

int PrintDigits(int Number) {

	int Reminder = 0;
	int Sum = 0;


	do {

		Reminder = Number % 10;
		Number = Number / 10;
		Sum = Sum + Reminder;

	} while (Number > 0);

	cout << "Sum Of Digits = " << Sum << endl;

	return Sum;
}

int main()
{

	PrintDigits(ReadPositiveNumber("Please enter a positive numbers ?"));

}
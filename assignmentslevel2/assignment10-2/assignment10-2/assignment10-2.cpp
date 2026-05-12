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

int ReserveNumver(int Number) {

	int Reminder = 0, Number2 = 0;
	while (Number > 0)

	{
		Reminder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Reminder;
	}
	return Number2;
}
void PrintDigits(int Number) {

	int Reminder = 0;

	while (Number > 0)

	{
		Reminder = Number % 10;
		Number = Number / 10;
		cout << Reminder << endl;
	}
}

int main()
{

	PrintDigits(ReserveNumver(ReadPositiveNumber("Please enter a positive numbers ?")));

}
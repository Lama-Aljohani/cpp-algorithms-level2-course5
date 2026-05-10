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


int CountDigitsFrequncy(short DigitsToCheck,int Number) {

	int Reminder = 0,FerqCount = 0;
	while (Number > 0)

	{
		Reminder = Number % 10;
		Number = Number / 10;

		if (DigitsToCheck == Reminder) {

			FerqCount++;
		}
	}
	return FerqCount;
}
int main()
{
	int Number= ReadPositiveNumber("Please enter a positive numbers ?");
	short DigitsToCheck = ReadPositiveNumber("Please enter one digits to check ?");

	cout << " Digits " << DigitsToCheck << "Frequncy" << " is "
		<< CountDigitsFrequncy(DigitsToCheck,  Number) << " Time(s) ";

	return 0;
}
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


 int CountDigitsFrequncy(short DigitsToCheck, int Number) {

	int Reminder = 0, FerqCount = 0;
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

 void PrintAllDigitsFrequncy(int Number) {

	 for (int i = 0; i < 10; i++)
	 {
		 short DigitsFrequncy = 0;

		 DigitsFrequncy = CountDigitsFrequncy(i, Number);

		 if (DigitsFrequncy > 0)
		 {
			 cout << " Digits " << i << " Frequncy is "
				 << DigitsFrequncy << " Time(s) \n";
		 }

	 }
 }

int main()
{
	int Number = ReadPositiveNumber("Please enter a positive numbers ?");
	PrintAllDigitsFrequncy(Number);
	
	return 0;
}
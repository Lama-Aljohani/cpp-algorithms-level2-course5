#include <iostream>
using namespace std;
#include <string>
#include<cmath>

int ReadPositiveNumber(string Massege) {

	int Number = 0;
	do
	{
		cout << Massege << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

void PrintInvertedLetterPattern(int Number) {

	for (int i = 65; i <= 65 + Number - 1; i++)
	{
		for (int j = 1; j <= Number - ((65 + Number - 1) - i); j++)

		{
			cout << char(i) << " ";

		}
		cout << "\n";
	}
}
int main()
{

	PrintInvertedLetterPattern(ReadPositiveNumber("Please enter a positive number ?"));


	return 0;
}
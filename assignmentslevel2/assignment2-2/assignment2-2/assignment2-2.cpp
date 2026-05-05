#include <iostream>
using namespace std;

enum enPrimNotPrime {Prime=1, NotPrime=2};

int ReadPositiveNumber(string Massege) {

	int Number = 0;
	do
	{
		cout << Massege << endl;
		cin >> Number;
	} while (Number <= 0);
	
	return Number;
}

enPrimNotPrime CheckPrime(int Number) {
	
	int M = round(Number / 2);
	
	for (int counter = 2; counter <= Number; counter++)
	{
		if (Number % 2 == 0)
			return enPrimNotPrime::Prime;
		else
			return enPrimNotPrime::NotPrime;
	}

}
	void PrintPrimeNumberFrom1ToN(int Number)
	{
		cout << "\n";
		cout << "Prime Number From " << 1 <<" To " << Number;
		cout << " are : " << endl;

		for (int i =1; i<=Number; i++)
		{ 
			if (CheckPrime(i) == enPrimNotPrime::Prime) {

				cout << i <<endl;
			}
		}
	}
int main()
{
	PrintPrimeNumberFrom1ToN(ReadPositiveNumber("Plese Enter a Positive Number ?"));
	return 0;

}


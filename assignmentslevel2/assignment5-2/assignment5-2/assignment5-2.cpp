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

void ReservedOrderNumber(int Number) {
	string StN;
	StN = to_string(Number);

	for (int i = StN.length()-1; i >= 0; i--) {

		cout << StN[i] << endl;

	}
}


int main()
{

	ReservedOrderNumber(ReadPositiveNumber("Please enter a positive numbers ?"));

}

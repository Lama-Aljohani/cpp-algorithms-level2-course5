#include <iostream>
using namespace std;

void PrintTableHeadr() {

	cout << "\n\n\t\t\t Multiplication Table From 1 to 10\n\n";

	for (int i = 1; i <= 10; i++)
	{
		cout << i << "\t";
	}
	cout << "\n_______________________________________________________________________________________\n";
}

string CoulmSpretor(int i) {

	if (i < 10)
		return  "   |";
	else
		return  "  |";
}

void PrintMultiplicationTable() {
	PrintTableHeadr();

	for (int i = 1; i <= 10; i++)
	{
		cout << i << CoulmSpretor(i)<<"\t";

		for (int j=1; j <= 10; j++) {

			cout << i * j << "\t";
		}
		cout << endl;
	}

}
int main()
{

	PrintMultiplicationTable();

	return 0;

}

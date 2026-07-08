#include <iostream>
using namespace std;


string ReadPassword() {
	string Password;

	cout << "Please enter a 3-Letter password (All capital)?\n";
		cin >> Password;


return Password;
}

bool GuessPassword(string OriginalPassword) {

	cout << "\n";
	string word = " ";
	int Counter = 0;

	for (int i = 65; i <= 90; i++) {

		for (int j = 65; j <= 90; j++) {
			for (int k = 65; k <= 90; k++) {


				word.append(1, char(i));
				word.append(1, char(j));
				word.append(1, char(k));

				Counter++;

				cout << "Trial [" << Counter << "] :" << word << endl;
				
				if (word == OriginalPassword)
				{
					cout << "\n Password is " << word << endl;
					cout << " Found after " << Counter << " Trial(s) \n";

					return true;

				}
				word = "";
			}
		}

	}
	return false;

}
int main()
{
	GuessPassword(ReadPassword ());

	return 0;

}

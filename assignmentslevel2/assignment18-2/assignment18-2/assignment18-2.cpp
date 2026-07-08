#include <iostream>
#include <string>
using namespace std;


string ReadText() {

	string Text;

	cout << "Please enter Text\n";
	getline(cin, Text);

	return Text;
}
string EncryptionText(string Text, short EncryptionKey) {

	for (int i = 0; i < Text.length(); i++) {


		Text[i] = char((int)Text[i] + EncryptionKey);
	}
	return Text;
}
string DecryptionText(string Text, short EncryptionKey) {

	for (int i = 0; i <Text.length(); i++) {

		Text[i] = char((int)Text[i] - EncryptionKey);
	}
	return Text;
}


int main()
{
	const short EncryptionKey = 2;

	string TextAfterEncryption, TextAfterDecryption;
	string Text = ReadText();

	TextAfterEncryption = EncryptionText(Text, EncryptionKey);
	TextAfterDecryption = DecryptionText(TextAfterEncryption, EncryptionKey);

	cout << "\nText Befor Encryption : " << Text << endl;
	cout << "\nText After Encryption : " << TextAfterEncryption << endl;
	cout << "\nText After Decryption : " << TextAfterDecryption << endl;

	return 0;

}

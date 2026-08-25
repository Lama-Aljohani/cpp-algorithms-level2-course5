#include <iostream>   
#include <cstdlib>    
#include <ctime>     
using namespace std;

int RandomNumber(int From, int To) {

    int randNum = rand() % (To - From + 1) + From;

    return randNum;

}


enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharcter = 3, Digit = 4 };


char GetRandomCharacter(enCharType CharType)

{
    switch (CharType) {

    case enCharType::CapitalLetter:
    {
        return char(RandomNumber(65, 90));
        break;
    }
    case enCharType::SmallLetter: {
        return char(RandomNumber(97, 122));
        break;
    }
    case enCharType::SpecialCharcter: {
        return char(RandomNumber(33, 47));
        break;
    }
    case enCharType::Digit:
    {
        return char(RandomNumber(48, 57));
        break;
    }
    }

    return '\0';
}
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}


string GenerateWord(enCharType CharType, short Length) {

    string word;
    
    for (int i = 1; i <= Length; i++) {

        word = word + GetRandomCharacter(CharType);
    }
    return word;
}

string GenerateKey() {

    string Key = "";

    Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    Key = Key + GenerateWord(enCharType::CapitalLetter, 4);

    return Key;
}
void GenerateKeys(short NumberOfKeys) {

    for (int i = 1; i <= NumberOfKeys; i++)
    {
        cout << "Key [" << i << "] :";
        cout << GenerateKey() << endl;
    }
}
int main()
{
    srand((unsigned)time(NULL));

    GenerateKeys(ReadPositiveNumber("Please enter how many keys to generate? \n"));

    return 0;
}
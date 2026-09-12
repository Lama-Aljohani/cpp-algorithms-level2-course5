#include <iostream>   
using namespace std;

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

int RandomNumber(int From, int To) {

    int randNum = rand() % (To - From + 1) + From;

    return randNum;

}

void ReadArray(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
    {
        cout << RandomNumber(10, 100) << endl;
        
    }
    cout << endl;
}

int main() {

    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;

    ReadArray(arr, arrLength);


    return 0;
}
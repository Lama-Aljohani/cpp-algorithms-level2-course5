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

void FillArayWithRandomNumber(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1,100);
 }


void PrintArray(int arr[100], int arrLength)
{

    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}

int main() {

    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;

    FillArayWithRandomNumber(arr, arrLength);

    cout << " \nArray Elemnts: ";
    PrintArray(arr, arrLength);

    return 0;
}
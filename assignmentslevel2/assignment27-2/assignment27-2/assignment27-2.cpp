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
        arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength)
{

    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}

int SumNumberInArray(int arr[100], int arrLength)
{
    int Sum = 0;
    for (int i = 0; i < arrLength; i++)
    {
        Sum += arr[i];
    }

    return Sum;
}

int main() {

    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;
    int Sum;

    FillArayWithRandomNumber(arr, arrLength);

    cout << " \nArray Elemnts: ";
    PrintArray(arr, arrLength);

    cout << " \nAverage of all Number is: ";
    cout << SumNumberInArray(arr, arrLength)/arrLength << endl;


    return 0;
}
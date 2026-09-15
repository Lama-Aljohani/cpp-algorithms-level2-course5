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

void FillArrayWithRandomNumber(int arr[100], int& arrLength)
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


void CopyArray(int arr[100], int arrLength)
{

    
     PrintArray(arr, arrLength);

    cout << "\n";

}

int main() {

    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength;
    int Sum;

    FillArrayWithRandomNumber(arr, arrLength);

    cout << " \nArray 1 Elemnts: \n";
    PrintArray(arr, arrLength);

    cout << " \nArray 2 Elemnts: \n";
    CopyArray(arr, arrLength);



    return 0;
}
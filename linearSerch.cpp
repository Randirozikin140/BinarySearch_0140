#include <iostream>
using namespace std;

int arr[20]; // Array to be serched
int n; // Number of elements in the array
int i; // indeks of array element

void input()
{
    while (true)
    {
        cout << "Enter number of elements in the array: ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray should have minimum 1 and maximum 20 elements.\n";
    }

    // Acpect array elements
    cout << "\n-----------------------------------------------------\n";
    cout << "Enter elements \n";
    cout << "-----------------------------------------------------\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << "> ";
        cin >> arr[i];
    }
};
#include <iostream>
using namespace std;

int arr[20];

int n;
void input ()
{
    while (true)
    {
        cout << "masukkan jumlah data pada array : ";
        cin >> n;

        if (n <=20)
        {
            break;
        }
        else
        {
            cout << "\nArray tidak boleh lebih dari 20\n";
        }
    }

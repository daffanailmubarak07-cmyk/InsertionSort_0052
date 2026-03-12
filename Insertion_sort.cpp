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
  cout << endl;
    cout << "==========";
    cout << "=== masukkan element array===";
    cout << "==========" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}
      

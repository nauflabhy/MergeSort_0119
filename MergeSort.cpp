#include <iostream>
using namespace std;

int arr[20], B[20];

int n;

void input()
{
    while (true)
    {
        cout << "Masukan Panjang element array :";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else{
            cout << "\nMaksimal panjang array 20";
        }
    }
    cout << "\n-----------------------" << endl;
    cout << "\nInput Isi element array" << endl;
    cout << "\n-----------------------" << endl;

    for (int i = 0; i < n; i++)
}
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
}
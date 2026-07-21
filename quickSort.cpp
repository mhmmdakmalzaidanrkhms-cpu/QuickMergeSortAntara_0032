#include <iostream>
using namespace std;

int arr[20];      //inisialisasi variabel array untuk menampung nilai
int cmp_count = 0; //inisialisasi variabel untuk jumlah perbandingan
int mov_count = 0; //inisialisasi variabel untuk jumlah pergerakan data
int n;             //inisialisasi variabel n untuk panjang elemen array

void input()   //membuat prosedur input
{
    while (true) //looping untuk meminta input panjang elemen array
    {
        cout << "Masukkan Panjang element array : ";
        cin >> n;

        if (n <= 20) //jika jumlah elemen kurang dari atau sama dengan 20
        {
            break;
        }
        else //jika jumlah elemen lebih dari 20 permintaan input akan diulang
        {
            cout << "\nMaksimal panjang array adalah 20";
        }
    }

    cout << "\n------------------------" << endl;
    cout << "\nInputkan Isi element array" << endl;
    cout << "\n------------------------" << endl;

    for (int i = 0; i < n; i++) //looping untuk mengisi index array
    {
        cout << "Array index ke- " << i << " : ";
        cin >> arr[i];
    }
}

void swap(int x, int y) //membuat prosedur swap
{
    int temp = arr[x];

    arr[x] = arr[y];
    arr[y] = temp;
    mov_count++;
}


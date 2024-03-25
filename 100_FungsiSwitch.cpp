#include <iostream>
using namespace std;

int bilSatu, bilDua;

void input () {
    cout << "Masukkan Bilangan Pertama = ";
    cin >> bilSatu;
    cout << "Masukkan Bilangan Kedua = ";
    cin >> bilDua;   
}

float penjumlahan(float a,float b)
{
    return a + b;
}

float pengurangan(float a,float b)
{
    return a - b;
}

float perkalian(float a,float b)
{
    return a * b;
}

float pembagian(float a,float b)
{
    return a / b;
}

int main () {
    int pilihan;

    do
    {
        cout << "===================================" << endl;
        cout << "MENu" << endl;
        cout << "1. Penjumlahan " << endl;
        cout << "2. Pengurangan " << endl;
        cout << "3. Perkalian " << endl;
        cout << "4. Pembagian " << endl;
        cout << "5. Exit" << endl;
        cout << "Masukkan pilihan sesuai angka diatas : ";
        cin >> pilihan;

        while (/* condition */)
        {
            /* code */
        }
        
    }
}
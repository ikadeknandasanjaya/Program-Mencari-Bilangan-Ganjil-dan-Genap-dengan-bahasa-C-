#include <iostream>

using namespace std;

int main()
{

    // Deklarasi inputan
    int bilangan;

    cout << "Masukan bilangan dan sistem akan mendeteksi apakah itu bilangan genap atau ganjil" << endl;
    cin >> bilangan;

    // Rumus yang digunakan
    if (bilangan % 2 == 0 && bilangan != 0)
    {
        cout << "bilangan genap" << endl;
    }

    else if (bilangan % 2 == 1 && bilangan != 0)
    {
        cout << "bilangan ganjil" << endl;
    }

    else
    {
        cout << "bilangan nol" << endl;
    }
    return 0;
}
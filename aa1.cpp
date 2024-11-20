#include <iostream>
using namespace std;

void kalkulator(){
    float a, b, hasil;
    char aritmatika;
    char ulang;

    cout << "masukkan angka pertama: ";
    cin >> a;
    cout << "masukkan operasi aritmatika: ";
    cin >> aritmatika;
    cout << "masukkan angka kedua: ";
    cin >> b;
    cout << "\nhasil perhitungan: ";
    cout << a << " " << aritmatika << " " << b << " = ";

    if (aritmatika == '+')
    {
        hasil = a + b;
    }
    else if (aritmatika == '-')
    {
        hasil = a - b;
    }
    else if (aritmatika == '*')
    {
        hasil = a * b;
    }
    else if (aritmatika == '/')
    {
        if (b == 0)
        {
        cout << "Error pembagian dengan nol tidak diizinkan, keluar program!" << endl;
        return;
        }
        hasil = a / b;
    }
    else
    {
        cout << "Error invalid operator keluar program!" << endl;
        return;
    }

    cout << hasil << endl; // cetak hasil perhitungan
    
    // ulang jika penguji kurang puas
    cout << "\nIngin buktikan lagi (y/n)? ";
    cin >> ulang;

    if (ulang == 'Y' || ulang == 'y')
    {
        kalkulator(); // panggil lagi fungsi kalkulator
    }
    else
    {
        cout << "keluar program, terimakasii :)";
        return;
    }
}

int main(){
    cout << "selamat datang di kalkulator Koh-Atih ^_^\n";
    kalkulator();
    return 0;
}
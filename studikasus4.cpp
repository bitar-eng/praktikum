#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int rupiah;
    float kurs;
    int angka;
    string Matauang, simbol;

    cout << "==========================" << endl;
    cout << "Pilih mata uang konversi:" << endl;
    cout << "1. Dollar  (USD)" << endl;
    cout << "2. Euro    (EUR)" << endl;
    cout << "3. Yen     (JPY)" << endl;
    cout << "4. Rupee   (INR)" << endl;
    cout << "5. Rial    (SAR)" << endl;
    cout << "6. Won     (KRW)" << endl;
    cout << "7. Ringgit (MYR)" << endl;
    cout << "8. Baht    (THB)" << endl;
    cout << "==========================" << endl;
    cout << "Masukkan mata uang yang anda inginkan (1-8)   : ";
    cin >> angka;

    cout << "masukkan jumlah rupiah   : ";
    cin >> rupiah;

    cout << "masukkan kurs            : ";
    cin >> kurs;

if (angka == 1) 
    { Matauang = "Dollar";  simbol = "$"; }
else if (angka == 2) 
    { Matauang = "Euro";    simbol = "\u20AC"; }
else if (angka == 3) 
    { Matauang = "Yen";     simbol = "\u00A5"; }
else if (angka == 4) 
    { Matauang = "Rupee";   simbol = "Rs"; }
else if (angka == 5) 
    { Matauang = "Rial";    simbol = "SR"; }
else if (angka == 6) 
    { Matauang = "Won";     simbol = "\u20A9"; }
else if (angka == 7) 
    { Matauang = "Ringgit"; simbol = "RM"; }
else if (angka == 8) 
    { Matauang = "Baht";    simbol = "\u0E3F"; }
else
{
    cout << "Pilihan tidak valid!" << endl;
    return 1;
}

    float hasil = rupiah / kurs;

    cout << "==========================" << endl << left;
    cout << "Jumlah Rupiah" << ": Rp " << rupiah << endl;
    cout << "Jumlah " + Matauang << ": " << simbol << " "
         << fixed << setprecision(2) << hasil << endl;

    return 0;
}
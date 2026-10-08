#include <iostream>
#include <iomanip> // Untuk manipulators
#include <string>
using namespace std;
int main()
{
    // Deklarasi variabel
    string fullName = "Jane Doe";
    int age = 21;
    float height = 168.5;
    double averageScore = 85.75;
    bool isPassed = true;

    cout << left; 
    cout << setw(30) << "Masukkan Nama Lengkap " << ": ";
    cin >> fullName;
    cout << setw(30) << "Masukkan Usia" << ": ";
    cin >> age;
    cout << setw(30) << "Masukkan Tinggi Badan" << ": ";
    cin >> height;
    cout << setw(30) << "Masukkan Nilai Rata-Rata" << ": ";
    cin >> averageScore;
    cout << setw(30) << "Masukkan Status Kelulusan (0:Tidak/1:Ya)" << ": ";
    cin >> isPassed;

    cout << "=========================================================\n";
    cout << left; // Meratakan ke kiri
    cout << setw(20) << "Nama Lengkap"     << ": " << fullName << endl;
    cout << setw(20) << "Usia"             << ": " << age      << " tahun "       << endl;
    cout << setw(20) << "Tinggi Badan"     << ": " << fixed    << setprecision(1) << height << " cm" << endl;
    cout << setw(20) << "Nilai Rata-Rata"  << ": " << fixed    << setprecision(2) << averageScore    << endl;
    cout << setw(20) << "Status Kelulusan" << ": " << (isPassed ? "Lulus" : "Tidak Lulus")           << endl;
    return 0;
}
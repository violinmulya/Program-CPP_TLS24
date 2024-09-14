2/*
    NAMA    : VIOLIN MULYA PUTRA
    NIM     : XX/XXXXXX/AA/XXXXX
    TUGAS   : Big Scene - TLS 2024
    JUDUL   : Kalkulator Sederhana
*/

// LIBRARIES/PUSTAKA YANG DIGUNAKAN
#include <iostream>  // Untuk input dan output.
#include <cmath>     // Untuk fungsi aritmetika seperti pow, sqrt, round, dan sebagainya.
#include <iomanip>   // Untuk mengatur output seperti presisi angka desimal (setprecision).

using namespace std;

// Fungsi untuk menghitung faktorial
int faktorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main() {
    // VARIABEL-VARIABEL YANG DIGUNAKAN
    int pilihan;        // Untuk menyimpan pilihan operasi yang dipilih
    double bil1, bil2;  // Variabel untuk operasi selain faktorial
    int num;            // Variabel untuk faktorial
    bool programBerjalan = true; // Program berjalan selama kondisi true


    // ALGORITMA (PROSES PROGRAM)
    while (programBerjalan) {
        cout << "====== Kalkulator Sederhana ======" << endl;
        cout << "Pilih operasi yang ingin dijalankan:" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Faktorial" << endl;
        cout << "5. Keluar" << endl;
        cout << "Masukkan pilihan kamu (1-5): ";
        cin  >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan dua angka untuk dijumlahkan: ";
                cin >> bil1 >> bil2;
                cout << fixed << setprecision(1); // Mengatur agar output hanya satu angka desimal di belakang
                cout << "Hasil Penjumlahan: " << bil1 << " + " << bil2 << " = " << bil1 + bil2 << endl;
                break;

            case 2:
                cout << "Masukkan dua angka untuk dikurangkan: ";
                cin >> bil1 >> bil2;
                cout << "Hasil Pengurangan: " << bil1 << " - " << bil2 << " = " << bil1 - bil2 << endl;
                break;

            case 3:
                cout << "Masukkan dua angka untuk dikalikan: ";
                cin >> bil1 >> bil2;
                cout << "Hasil Perkalian: " << bil1 << " * " << bil2 << " = " << bil1 * bil2 << endl;
                break;

            case 4:
                cout << "Masukkan angka untuk menghitung faktorial: ";
                cin  >> num;
                if (num < 0) {
                    cout << "Faktorial tidak dapat dihitung untuk bilangan negatif!" << endl;
                } else {
                    cout << "Faktorial dari " << num << " adalah " << faktorial(num) << endl;
                }
                break;

            case 5:
                programBerjalan = false; // Digunakan untuk menghentikan program (exit program)
                cout << "Terima kasih telah menggunakan kalkulator!" << endl;
                break;

            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }
        cout << endl;
    }

    return 0;
}

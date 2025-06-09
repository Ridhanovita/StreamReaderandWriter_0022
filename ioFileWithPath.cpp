#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;
    string namaFile;

    cout << "Masukkan nama file: ";
    cin >> namaFile;

    // oprasi file dalam mode menulis.
    ofstream outfile;
    // menunjuk ke sebuah nama file untuk membuka
    outfile.open(namaFile + ".txt");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    // unlimited loop untuk menullis
    while(true) {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // loop akan berhenti jika anda memasukan karakter q
        if(baris == "q") break;
        // menulis dan memasukan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    // selesai dalam menulis sekarang tutup filenya
    outfile.close();

   
}
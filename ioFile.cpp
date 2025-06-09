#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;

    // oprasi file dalam mode menulis.
    ofstream outfile;
    // menunjuk ke sebuah nama file untuk membuka
    outfile.open("contohfile.txt");

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

    // operasi file dalam mode membaca
    ifstream infile;
    // menunjukan ke sebuah file untuk membuka
    infile.open("contohfile.txt");

    cout << endl << ">= Membuka dan membaca file " << endl;
    // jika file ada maka
    if (infile.is_open())
    {
        // melakukan perulangan setiap baris
        while (getline(infile, baris))
        {
            // dan tampilkan di sini
            cout << baris << "\n";
        }
        // tutup file tersebut setelah selesai
        infile.close();
    }
    // jika tidak ditemukan file maka akan menampilkan ini
    else cout << "Unable to open file";
    return 0;
}
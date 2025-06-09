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
   
}
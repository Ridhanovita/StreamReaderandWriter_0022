#include <iostream>
using namespace std;

int main()
{
    try {
        cout << " Selamat Belajar di Prodi TI UMY" << endl;
        throw 0.5; // melemparkan sebuah integer maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }
    catch (int a) {
        // blok ini akan dieksekusi
        cout << "Pengecualian akan diesekusi" << endl;
    }
    catch (...) {
        /*jika selain integer maka blok ini akan dieksekusi*/
        cout << "default pengecualian eksekusi" << endl;
    }

    return 0;
}
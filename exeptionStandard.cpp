#include <iostream>
#include <exception>
// untuk obyek exeption yang akan digunakan
#include <array>
// untuk obyek array yang akan kita gunakan
using namespace std;

int main()
{
    cout << "Awal Program" << endl; // penanda I:...
    try {
        array<int, 3> data = {1, 2, 3};
        // pesan array integer 3 elemen
        cout<<data.at(5)<<endl;
        // memanggil array elemen ke 5
    }
    catch (exception& e) {
        // penangkapan menggunakan obyek exception
        cout << e.what() << endl;
        /*akan dieksekusi karena array data hanya memiliki 3 elemen*/
    }
    
}
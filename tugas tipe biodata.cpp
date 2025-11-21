// tugas tipe biodata

#include <iostream>
using namespace std;

int main (){
    string nama;
    string jurusan;
    int umur;
    float tinggibadan;

    cout << "nama :";
    getline(cin, nama);

    cout << "jurusan: ";
    getline(cin, jurusan);

    cout << "umur: ";
    cin >> umur;

    cout << "tinggi badan: ";
    cin >> tinggibadan;

    cout << "\n=== HASIL BIODATA ===\n";
    cout << "Nama          : " << nama << endl;
    cout << "Jurusan       : " << jurusan << endl;
    cout << "Umur          : " << umur << endl;
    cout << "Tinggi Badan  : " << tinggibadan << " cm" << endl;

    return 0;
}

    //lanjutkan yang menghasilkan biodata input
    // dan hasil dari inputan
}


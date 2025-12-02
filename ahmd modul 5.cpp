#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukan Baris Segitiga Pascal :";
    cin >> n;
    for (int i = 0; i < n; i++) {
        //membentuk segetiga
        for (int s = 0; s < n - i; s++) {
            cout << " ";
        }
        int val = 1; //agar dimulai angka 1
        for (int j = 0; j <= i; j++) {
            cout << val << " ";
            //rumus 
            val = val * (i - j) / (j + 1);
        }
        cout << endl;
    }
    cout << "\n=================================\n";
    cout << "Nama : Raffi Ahmad Alfahrezy\n";
    cout << "Nim : 25104410050\n";
    cout << "Prodi : TTeknik Informatika - 1b\n";
    cout << "=================================\n";

    return 0;
}
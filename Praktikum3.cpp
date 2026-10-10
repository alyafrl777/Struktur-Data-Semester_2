#include <iostream>
using namespace std;

float cariVolume(float s) {
    float volume = s * s * s;
    cout << volume << endl;
    return volume;
}

int main() {
    float panjangKubus1;
    float panjangKubus2;

    cout << "Masukkan panjang rusuk kubus pertama: " << endl;
    cin >> panjangKubus1;

    cout << "Masukkan panjang rusuk kubus kedua: " << endl;
    cin >> panjangKubus2;

    if (cariVolume(panjangKubus1) > cariVolume(panjangKubus2)) {
        cout << "Kubus 1 lebih besar daripada kubus 2" << endl;
    } 
    else if (cariVolume(panjangKubus1) == cariVolume(panjangKubus2)) {
        cout << "Kubus 2 sama besarnya dengan kubus 1" << endl;
    } 
    else {
        cout << "Kubus 2 lebih besar daripada kubus 1" << endl;
    }

    return 0;
} 
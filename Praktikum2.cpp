#include <iostream>
using namespace std;

float cariLuas(float tinggi, float alas) {
    float luas = (tinggi * alas) / 2;
    return luas;
}

int main() {
    float tinggiSegitiga;
    float alasSegitiga;
    float luasSegitiga;

    cout << "Masukkan tinggi segitiga" << endl;
    cin >> tinggiSegitiga;

    cout << "Masukkan alas segitiga" << endl;
    cin >> alasSegitiga;

    luasSegitiga = cariLuas(tinggiSegitiga, alasSegitiga);
    cout << "Luas segitiga adalah " << luasSegitiga << endl;

    return 0;
}
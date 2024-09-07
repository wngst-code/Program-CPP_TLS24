#include <iostream>
#include <string>

using namespace std;

int main() {
    double budget;
    string tempat_makan;

    cout << "masukkan budget makan anda :";
    cin >> budget;

    if (budget < 7000){
        tempat_makan = "Rumah dan masak sendiri yaaaa";
    } else if (budget <= 10000) {
        tempat_makan = "Angkringan dan Nasi Rames";
    } else if (budget <= 15000) {
        tempat_makan = "Burjo / Warmindo, Ayam Geprek, Soto, Bakso, dan Mie ayam";
    } else if (budget <= 25000) {
        tempat_makan = "Pecel lele, Sate, dan Nasi Padang";
    } else if (budget > 25000) {
        tempat_makan = "Terserah kamu aja, di Jogja makanannya murah-murah kok";
    }

cout << "Dengan budget Rp" << budget << ",kamu bisa makan di " << tempat_makan << endl;

    return 0;
}
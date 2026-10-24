
#include <iostream>
using namespace std;

int main() {
    int pilihan, jumlah, harga = 0, total;

    cout << "===== MINI KASIR =====" << endl;
    cout << "1. Soto  - Rp15000" << endl;
    cout << "2. Rawon - Rp20000" << endl;

    cout << "\nPilih menu (1/2): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            harga = 15000;
            cout << "Menu: Soto" << endl;
            break;

        case 2:
            harga = 20000;
            cout << "Menu: Rawon" << endl;
            break;

        default:
            cout << "Pilihan tidak tersedia!" << endl;
            return 0;
    }

    cout << "Masukkan jumlah pesanan: ";
    cin >> jumlah;

    if (cin.fail() || jumlah <= 0) {
        cout << "Jumlah pesanan tidak valid!" << endl;
        return 0;
    }

    total = harga * jumlah;

    cout << "\n===== STRUK BELANJA =====" << endl;
    cout << "Harga satuan : Rp" << harga << endl;
    cout << "Jumlah       : " << jumlah << endl;
    cout << "Total bayar  : Rp" << total << endl;

    cout << "Terima kasih sudah membeli!" << endl;

    return 0;
}

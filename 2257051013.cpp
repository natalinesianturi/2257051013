#include <iostream>
#include <string>

using namespace std;

class Mahasiswa {
private:
    string nama;
    int umur;
    int nilai[5];

public:
    // Setter untuk nama
    void setNama(string nama) {
        this->nama = nama;
    }

    // Getter untuk nama
    string getNama() {
        return nama;
    }

    // Setter untuk umur
    void setUmur(int umur) {
        this->umur = umur;
    }

    // Getter untuk umur
    int getUmur() {
        return umur;
    }

    // Setter untuk nilai
    void setNilai(int indeks, int nilai) {
        this->nilai[indeks] = nilai;
    }

    // Getter untuk nilai
    int getNilai(int indeks) {
        return nilai[indeks];
    }

    // Method untuk menghitung rata-rata nilai
    double hitungRataRataNilai() {
        double total = 0;
        for (int i = 0; i < 5; i++) {
            total += nilai[i];
        }
        return total / 5;
    }

    // Method untuk menampilkan informasi mahasiswa
    void tampilInfo() {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << " tahun" << endl;
        cout << "Nilai: ";
        for (int i = 0; i < 5; i++) {
            cout << nilai[i] << " ";
        }
        cout << endl;
        cout << "Rata-rata Nilai: " << hitungRataRataNilai() << endl;
    }
};

int main() {
    Mahasiswa mhs1;

    // Menggunakan setter untuk mengatur nilai atribut
    mhs1.setNama("Alin");
    mhs1.setUmur(18);
    mhs1.setNilai(0, 89);
    mhs1.setNilai(1, 90);
    mhs1.setNilai(2, 92);
    mhs1.setNilai(3, 89);
    mhs1.setNilai(4, 91);

    // Menggunakan getter untuk mengakses nilai atribut
    cout << "Nama: " << mhs1.getNama() << endl;
    cout << "Umur: " << mhs1.getUmur() << " tahun" << endl;
    cout << "Nilai 1: " << mhs1.getNilai(0) << endl;
    cout << "Nilai 2: " << mhs1.getNilai(1) << endl;
    cout << "Nilai 3: " << mhs1.getNilai(2) << endl;
    cout << "Nilai 4: " << mhs1.getNilai(3) << endl;
    cout << "Nilai 5: " << mhs1.getNilai(4) << endl;
    cout << "Rata-rata Nilai: " << mhs1.hitungRataRataNilai() << endl;

    // Menampilkan informasi mahasiswa
    mhs1.tampilInfo();

    return 0;
}


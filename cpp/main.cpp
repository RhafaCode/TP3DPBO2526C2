#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include "film.h"
using namespace std;

// mengubah input durasi menjadi angka tanpa satuan menit
int bacaDurasi() {
    string input;
    getline(cin, input);
    size_t posisi = input.find_first_not_of(" \t");
    size_t akhir = input.find_first_of(" \t", posisi);
    return stoi(input.substr(posisi, akhir - posisi));
}

// menampilkan seluruh data film dalam bentuk tabel
void tampilkan(const vector<FilmBioskop>& daftar) {
    const string kepala[] = {"ID", "Judul", "Durasi", "Genre", "Sutradara", "Tahun", "Harga", "Studio", "Rating"};
    vector<vector<string>> rows;
    int lebar[9]; for (int i = 0; i < 9; ++i) lebar[i] = kepala[i].size();
    for (const auto& f : daftar) {
        vector<string> row = {f.id_media, f.judul, to_string(f.durasi_menit) + " m", f.genre, f.sutradara,
                              to_string(f.tahun_rilis), "Rp" + to_string(f.harga_tiket), f.studio, f.rating_usia};
        for (int i = 0; i < 9; ++i) lebar[i] = max(lebar[i], static_cast<int>(row[i].size()));
        rows.push_back(row);
    }
    for (int i = 0; i < 9; ++i) cout << "+" << string(lebar[i] + 2, '-'); cout << "+\n";
    auto cetak = [&](const vector<string>& row) { for (int i = 0; i < 9; ++i) cout << "| " << left << setw(lebar[i]) << row[i] << " "; cout << "|\n"; };
    cetak(vector<string>(kepala, kepala + 9));
    for (int i = 0; i < 9; ++i) cout << "+" << string(lebar[i] + 2, '-'); cout << "+\n";
    for (const auto& row : rows) cetak(row);
    for (int i = 0; i < 9; ++i) cout << "+" << string(lebar[i] + 2, '-'); cout << "+\n";
}

// menjalankan menu utama program
int main() {
    // menyiapkan data film awal
    vector<FilmBioskop> daftar = {
        {"F001", "Laskar Pelangi", 125, "Drama", "Riri Riza", 2008, 35000, "Studio 1", "SU"},
        {"F002", "Pengabdi Setan", 107, "Horror", "Joko Anwar", 2017, 40000, "Studio 2", "17+"},
        {"F003", "KKN di Desa Penari", 130, "Horror", "Awi Suryadi", 2022, 45000, "Studio 3", "17+"},
        {"F004", "Ngeri-Ngeri Sedap", 114, "Komedi", "Bene Dion", 2022, 40000, "Studio 4", "13+"},
        {"F005", "Jumbo", 102, "Animasi", "Ryan Adriandhy", 2025, 50000, "Studio 5", "SU"}
    };
    int pilihan;
    do {
        cout << "\n=== KATALOG FILM BIOSKOP ===\n1. Tambah data\n2. Tampilkan data\n0. Keluar\nPilihan: ";
        cin >> pilihan; cin.ignore();
        if (pilihan == 1) {
            // menerima data film baru dari pengguna
            string id, judul, genre, sutradara, studio, rating; int durasi, tahun, harga;
            cout << "ID media: "; getline(cin, id); cout << "Judul: "; getline(cin, judul);
            cout << "Durasi (menit): "; durasi = bacaDurasi(); cout << "Genre: "; getline(cin, genre);
            cout << "Sutradara: "; getline(cin, sutradara); cout << "Tahun rilis: "; cin >> tahun;
            cout << "Harga tiket: "; cin >> harga; cin.ignore(); cout << "Studio: "; getline(cin, studio);
            cout << "Rating usia: "; getline(cin, rating); daftar.emplace_back(id, judul, durasi, genre, sutradara, tahun, harga, studio, rating);
            cout << "Data berhasil ditambahkan.\n";
        } else if (pilihan == 2) {
            // menampilkan data film yang tersimpan
            tampilkan(daftar);
        }
    } while (pilihan != 0);
}

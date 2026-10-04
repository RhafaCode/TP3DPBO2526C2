#ifndef KLINIK_H
#define KLINIK_H

#include <iostream>
#include <string>
#include <vector>
#include "Dokter.h"
#include "Pasien.h"

// Klinik menyimpan koleksi dokter dan pasien serta menampilkan datanya.
class Klinik {
private:
    std::string namaKlinik;
    std::vector<Dokter> daftarDokter;
    std::vector<Pasien> daftarPasien;

public:
    explicit Klinik(const std::string& namaKlinik) : namaKlinik(namaKlinik) {}

    // Tambahkan objek baru ke daftar yang sesuai.
    void tambahDokter(const Dokter& dokter) { daftarDokter.push_back(dokter); }
    void tambahPasien(const Pasien& pasien) { daftarPasien.push_back(pasien); }

    // Tampilkan identitas umum dan data khusus setiap dokter dan pasien.
    void tampilkanSemuaData() const {
        std::cout << "\n=== " << namaKlinik << " ===\n";
        std::cout << "Daftar Dokter (" << daftarDokter.size() << ")\n";
        // Nomor tampilan dimulai dari satu agar mudah dibaca.
        for (std::size_t i = 0; i < daftarDokter.size(); ++i) {
            const Dokter& dokter = daftarDokter[i];
            std::cout << i + 1 << ". Nama: " << dokter.getNama()
                      << " | Usia: " << dokter.getUsia()
                      << " | Gender: " << dokter.getGender()
                      << " | Spesialis: " << dokter.getSpesialis()
                      << " | Jam praktik: " << dokter.getJamPraktik() << '\n';
        }

        std::cout << "Daftar Pasien (" << daftarPasien.size() << ")\n";
        for (std::size_t i = 0; i < daftarPasien.size(); ++i) {
            const Pasien& pasien = daftarPasien[i];
            std::cout << i + 1 << ". Nama: " << pasien.getNama()
                      << " | Usia: " << pasien.getUsia()
                      << " | Gender: " << pasien.getGender()
                      << " | Keluhan: " << pasien.getKeluhan()
                      << " | No. rekam medis: " << pasien.getNomorRekamMedis() << '\n';
        }
    }
};

#endif
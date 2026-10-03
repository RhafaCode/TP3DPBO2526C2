#include <iostream>
#include "Klinik.h"

int main() {
    Klinik klinik("Klinik Sehat Sentosa");

    klinik.tambahDokter(Dokter("dr. Nadia Putri", 38, "Perempuan", "Umum", "08.00-12.00"));
    klinik.tambahDokter(Dokter("dr. Bima Pratama", 42, "Laki-laki", "Anak", "13.00-17.00"));
    klinik.tambahPasien(Pasien("Rani", 24, "Perempuan", "Demam dan batuk", "RM-2026-001"));
    klinik.tambahPasien(Pasien("Dito", 9, "Laki-laki", "Pemeriksaan rutin", "RM-2026-002"));

    std::cout << "DATA SEBELUM PENAMBAHAN\n";
    klinik.tampilkanSemuaData();

    klinik.tambahDokter(Dokter("dr. Siti Rahma", 35, "Perempuan", "Gigi", "09.00-14.00"));
    klinik.tambahPasien(Pasien("Fajar", 31, "Laki-laki", "Sakit gigi", "RM-2026-003"));

    std::cout << "\nDATA SETELAH PENAMBAHAN\n";
    klinik.tampilkanSemuaData();
    return 0;
}
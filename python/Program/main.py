from dokter import Dokter
from klinik import Klinik
from pasien import Pasien


def main():
    klinik = Klinik("Klinik Sehat Sentosa")

    klinik.tambah_dokter(Dokter("dr. Nadia Putri", 38, "Perempuan", "Umum", "08.00-12.00"))
    klinik.tambah_dokter(Dokter("dr. Bima Pratama", 42, "Laki-laki", "Anak", "13.00-17.00"))
    klinik.tambah_pasien(Pasien("Rani", 24, "Perempuan", "Demam dan batuk", "RM-2026-001"))
    klinik.tambah_pasien(Pasien("Dito", 9, "Laki-laki", "Pemeriksaan rutin", "RM-2026-002"))

    print("DATA SEBELUM PENAMBAHAN")
    klinik.tampilkan_semua_data()

    klinik.tambah_dokter(Dokter("dr. Siti Rahma", 35, "Perempuan", "Gigi", "09.00-14.00"))
    klinik.tambah_pasien(Pasien("Fajar", 31, "Laki-laki", "Sakit gigi", "RM-2026-003"))

    print("\nDATA SETELAH PENAMBAHAN")
    klinik.tampilkan_semua_data()


if __name__ == "__main__":
    main()
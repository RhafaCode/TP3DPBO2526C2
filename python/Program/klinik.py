class Klinik:
    """Kelola daftar dokter dan pasien di sebuah klinik."""

    def __init__(self, nama_klinik):
        """Buat klinik dengan daftar dokter dan pasien yang masih kosong."""
        self.nama_klinik = nama_klinik
        self.daftar_dokter = []
        self.daftar_pasien = []

    def tambah_dokter(self, dokter):
        """Tambahkan dokter ke daftar klinik."""
        self.daftar_dokter.append(dokter)

    def tambah_pasien(self, pasien):
        """Tambahkan pasien ke daftar klinik."""
        self.daftar_pasien.append(pasien)

    def tampilkan_semua_data(self):
        """Cetak identitas dan informasi khusus seluruh dokter dan pasien."""
        print(f"\n=== {self.nama_klinik} ===")
        print(f"Daftar Dokter ({len(self.daftar_dokter)})")
        # Penomoran dimulai dari satu agar hasil mudah dibaca.
        for nomor, dokter in enumerate(self.daftar_dokter, start=1):
            print(
                f"{nomor}. Nama: {dokter.nama} | Usia: {dokter.usia} "
                f"| Gender: {dokter.gender} | Spesialis: {dokter.spesialis} "
                f"| Jam praktik: {dokter.jam_praktik}"
            )

        print(f"Daftar Pasien ({len(self.daftar_pasien)})")
        for nomor, pasien in enumerate(self.daftar_pasien, start=1):
            print(
                f"{nomor}. Nama: {pasien.nama} | Usia: {pasien.usia} "
                f"| Gender: {pasien.gender} | Keluhan: {pasien.keluhan} "
                f"| No. rekam medis: {pasien.nomor_rekam_medis}"
            )
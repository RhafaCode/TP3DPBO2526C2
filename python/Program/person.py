class Person:
    """Kelas dasar yang menyimpan identitas umum dokter dan pasien."""

    def __init__(self, nama, usia, gender):
        """Inisialisasi data identitas yang digunakan kelas turunan."""
        self.nama = nama
        self.usia = usia
        self.gender = gender
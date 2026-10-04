from person import Person


class Pasien(Person):
    """Pasien mewarisi identitas umum dan menambahkan data pemeriksaan."""

    def __init__(self, nama, usia, gender, keluhan, nomor_rekam_medis):
        """Simpan identitas pasien, keluhan, dan nomor rekam medis."""
        super().__init__(nama, usia, gender)
        self.keluhan = keluhan
        self.nomor_rekam_medis = nomor_rekam_medis
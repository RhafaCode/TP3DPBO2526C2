from person import Person


class Dokter(Person):
    """Dokter mewarisi identitas umum dan menyimpan informasi praktik."""

    def __init__(self, nama, usia, gender, spesialis, jam_praktik):
        """Simpan identitas dokter, spesialisasi, dan jadwal praktik."""
        super().__init__(nama, usia, gender)
        self.spesialis = spesialis
        self.jam_praktik = jam_praktik
from person import Person


class Dokter(Person):
    def __init__(self, nama, usia, gender, spesialis, jam_praktik):
        super().__init__(nama, usia, gender)
        self.spesialis = spesialis
        self.jam_praktik = jam_praktik
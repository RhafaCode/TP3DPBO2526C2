# menyimpan data dasar setiap media
class Media:
    def __init__(self, id_media, judul, durasi_menit):
        self.id_media = str(id_media)
        self.judul = str(judul)
        self.durasi_menit = int(durasi_menit)


# menambahkan informasi khusus film
class Film(Media):
    def __init__(self, id_media, judul, durasi_menit, genre, sutradara, tahun_rilis):
        super().__init__(id_media, judul, durasi_menit)
        self.genre = str(genre)
        self.sutradara = str(sutradara)
        self.tahun_rilis = int(tahun_rilis)


# menyimpan data film yang tayang di bioskop
class FilmBioskop(Film):
    def __init__(self, id_media, judul, durasi_menit, genre, sutradara, tahun_rilis,
                 harga_tiket, studio, rating_usia):
        super().__init__(id_media, judul, durasi_menit, genre, sutradara, tahun_rilis)
        self.harga_tiket = int(harga_tiket)
        self.studio = str(studio)
        self.rating_usia = str(rating_usia)

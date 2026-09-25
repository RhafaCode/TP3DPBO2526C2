#ifndef FILM_H
#define FILM_H
#include <string>

// menyimpan data dasar setiap media
class Media {
public:
    std::string id_media, judul;
    int durasi_menit;
    Media(const std::string& id, const std::string& nama, int durasi) : id_media(id), judul(nama), durasi_menit(durasi) {}
};

// menambahkan informasi khusus film
class Film : public Media {
public:
    std::string genre, sutradara;
    int tahun_rilis;
    Film(const std::string& id, const std::string& nama, int durasi, const std::string& jenis,
         const std::string& director, int tahun) : Media(id, nama, durasi), genre(jenis), sutradara(director), tahun_rilis(tahun) {}
};

// menyimpan data film yang tayang di bioskop
class FilmBioskop : public Film {
public:
    int harga_tiket;
    std::string studio, rating_usia;
    FilmBioskop(const std::string& id, const std::string& nama, int durasi, const std::string& jenis,
                const std::string& director, int tahun, int harga, const std::string& ruang, const std::string& rating)
        : Film(id, nama, durasi, jenis, director, tahun), harga_tiket(harga), studio(ruang), rating_usia(rating) {}
};
#endif

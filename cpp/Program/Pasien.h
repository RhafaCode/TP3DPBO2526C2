#ifndef PASIEN_H
#define PASIEN_H

#include "Person.h"

// Pasien mewarisi identitas umum dan menambahkan data pemeriksaan.
class Pasien : public Person {
private:
    std::string keluhan;
    std::string nomorRekamMedis;

public:
    // Isi identitas pasien melalui kelas dasar, lalu simpan data medisnya.
    Pasien(const std::string& nama, int usia, const std::string& gender,
           const std::string& keluhan, const std::string& nomorRekamMedis)
        : Person(nama, usia, gender), keluhan(keluhan), nomorRekamMedis(nomorRekamMedis) {}

    // Getter untuk keluhan dan nomor rekam medis pasien.
    const std::string& getKeluhan() const { return keluhan; }
    const std::string& getNomorRekamMedis() const { return nomorRekamMedis; }
};

#endif
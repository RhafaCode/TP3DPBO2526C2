#ifndef DOKTER_H
#define DOKTER_H

#include "Person.h"

// Dokter mewarisi identitas umum dan menyimpan informasi praktik.
class Dokter : public Person {
private:
    std::string spesialis;
    std::string jamPraktik;

public:
    // Isi identitas dokter melalui kelas dasar, lalu simpan data praktiknya.
    Dokter(const std::string& nama, int usia, const std::string& gender,
           const std::string& spesialis, const std::string& jamPraktik)
        : Person(nama, usia, gender), spesialis(spesialis), jamPraktik(jamPraktik) {}

    // Getter untuk spesialisasi dan jadwal praktik dokter.
    const std::string& getSpesialis() const { return spesialis; }
    const std::string& getJamPraktik() const { return jamPraktik; }
};

#endif
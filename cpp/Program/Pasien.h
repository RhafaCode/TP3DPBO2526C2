#ifndef PASIEN_H
#define PASIEN_H

#include "Person.h"

class Pasien : public Person {
private:
    std::string keluhan;
    std::string nomorRekamMedis;

public:
    Pasien(const std::string& nama, int usia, const std::string& gender,
           const std::string& keluhan, const std::string& nomorRekamMedis)
        : Person(nama, usia, gender), keluhan(keluhan), nomorRekamMedis(nomorRekamMedis) {}

    const std::string& getKeluhan() const { return keluhan; }
    const std::string& getNomorRekamMedis() const { return nomorRekamMedis; }
};

#endif
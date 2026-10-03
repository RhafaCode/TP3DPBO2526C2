#ifndef DOKTER_H
#define DOKTER_H

#include "Person.h"

class Dokter : public Person {
private:
    std::string spesialis;
    std::string jamPraktik;

public:
    Dokter(const std::string& nama, int usia, const std::string& gender,
           const std::string& spesialis, const std::string& jamPraktik)
        : Person(nama, usia, gender), spesialis(spesialis), jamPraktik(jamPraktik) {}

    const std::string& getSpesialis() const { return spesialis; }
    const std::string& getJamPraktik() const { return jamPraktik; }
};

#endif
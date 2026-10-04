#ifndef PERSON_H
#define PERSON_H

#include <string>

// Kelas dasar yang menyimpan identitas umum dokter dan pasien.
class Person {
protected:
    // Atribut protected dapat digunakan langsung oleh kelas turunan.
    std::string nama;
    int usia;
    std::string gender;

public:
    // Inisialisasi data umum setiap orang.
    Person(const std::string& nama, int usia, const std::string& gender)
        : nama(nama), usia(usia), gender(gender) {}

    // Getter menyediakan akses baca ke data identitas.
    const std::string& getNama() const { return nama; }
    int getUsia() const { return usia; }
    const std::string& getGender() const { return gender; }
};

#endif
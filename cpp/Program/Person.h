#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
protected:
    std::string nama;
    int usia;
    std::string gender;

public:
    Person(const std::string& nama, int usia, const std::string& gender)
        : nama(nama), usia(usia), gender(gender) {}

    const std::string& getNama() const { return nama; }
    int getUsia() const { return usia; }
    const std::string& getGender() const { return gender; }
};

#endif
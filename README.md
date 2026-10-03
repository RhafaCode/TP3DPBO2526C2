# TP3DPBO2526C2

## Janji
Saya Rhafa Farell Valeno dengan NIM 2508020 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain Pemrograman Berorientasi Objek. Saya tidak melakukan kecurangan yang telah dispesifikasikan. Aamiin.

## Tema dan Desain
Program memodelkan pengelolaan data dokter dan pasien di sebuah klinik. Desain memakai empat kelas, hierarchical inheritance, dan composition.

## Kelas, Atribut, dan Method
- `Person` adalah base class dengan atribut `nama`, `usia`, dan `gender`. Constructor mengisi data umum seseorang; getter menyediakan data dasar kepada kelas turunan.
- `Dokter` mewarisi `Person` dan menambahkan `spesialis` serta `jamPraktik`. Constructornya mengisi data orang melalui constructor parent sekaligus data profesi dokter.
- `Pasien` mewarisi `Person` dan menambahkan `keluhan` serta `nomorRekamMedis`. Constructornya mengisi data orang dan data pasien.
- `Klinik` memiliki `namaKlinik`, `daftarDokter`, dan `daftarPasien`. Method `tambahDokter` dan `tambahPasien` menambahkan objek ke koleksi, sedangkan `tampilkanSemuaData` mencetak semua atribut beserta jumlah data. C++ memakai `vector`, Java memakai `ArrayList`, dan Python memakai `list`.

## Penjelasan Relasi
- **Hierarchical inheritance:** `Dokter` dan `Pasien` sama-sama menjadi subclass dari `Person`. Keduanya mewarisi data umum seseorang, lalu masing-masing memiliki atribut khusus. Tidak digunakan multiple atau hybrid inheritance.
- **Composition:** objek `Klinik` mengelola koleksi dokter dan pasien sebagai bagian dari data internalnya. Semua penambahan dan penampilan data dilakukan melalui `Klinik`; implementasi menyimpan objek secara langsung di koleksi yang dimiliki kelas tersebut.
- **Inheritance vs. class relationship:** inheritance menyatakan hubungan “adalah” (`Dokter` adalah `Person`), sedangkan composition menyatakan hubungan “memiliki” (`Klinik` memiliki dokter dan pasien). Composition bukan inheritance dan tidak membuat `Klinik` menjadi turunan `Person`.
- **Array of object:** daftar dokter dan pasien merupakan koleksi objek, sehingga jumlah masing-masing dapat bertambah melalui method tambah.

## Alur Program
1. Program membuat satu objek `Klinik`, lalu mengisi dua dokter dan dua pasien awal.
2. Program mencetak seluruh data awal sebagai kondisi sebelum penambahan.
3. Method tambah pada `Klinik` dipanggil untuk menambahkan satu dokter dan satu pasien.
4. Program mencetak kembali seluruh data. Jumlah dokter dan pasien masing-masing berubah dari dua menjadi tiga.

Data contoh ditulis statis di `main`/fungsi `main` agar kondisi sebelum dan sesudah penambahan dapat langsung dibandingkan saat program dijalankan. Method tambah dapat dipanggil kembali dengan objek lain.

## Struktur Folder
```text
cpp/Program/           Person.h, Dokter.h, Pasien.h, Klinik.h, main.cpp
cpp/Dokumentasi/       dokumentasi screenshot C++ TP3
python/Program/        person.py, dokter.py, pasien.py, klinik.py, main.py
python/Dokumentasi/    dokumentasi screenshot Python TP3
java/Program/          Person.java, Dokter.java, Pasien.java, Klinik.java, Main.java
java/Dokumentasi/      dokumentasi screenshot Java TP3 (bonus)
Dokumentasi/           arsip screenshot tugas praktikum sebelumnya
README.md
```

## Cara Menjalankan
```bash
g++ -std=c++17 cpp/Program/main.cpp -o cpp/Program/klinik && ./cpp/Program/klinik
python3 python/Program/main.py
javac -d java/Program/build java/Program/*.java && java -cp java/Program/build Program.Main
```

## Dokumentasi
Folder `cpp/Dokumentasi`, `python/Dokumentasi`, dan `java/Dokumentasi` disediakan untuk screenshot hasil program masing-masing.
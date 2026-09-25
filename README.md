# TP2DPBO2526C2

## Janji
Saya Rhafa Farell Valeno dengan NIM 2508020 mengerjakan Tugas Praktikum 2 dalam mata kuliah Desain Pemrograman Berorientasi Objek. Saya tidak melakukan kecurangan yang telah dispesifikasikan. Aamiin.

## Tema dan Konsep
Program mengelola katalog film bioskop. Tema ini dikembangkan menjadi multilevel inheritance yang masuk akal di dunia nyata:


`Media` menjadi data umum semua media, `Film` menambahkan informasi karya film, dan `FilmBioskop` menambahkan informasi penayangan di bioskop.

## Atribut dan Method
- `Media`: `id_media`, `judul`, `durasi_menit`. Constructor mengisi data dasar media.
- `Film`: `genre`, `sutradara`, `tahun_rilis`. Constructor meneruskan data ke parent lalu mengisi data film.
- `FilmBioskop`: `harga_tiket`, `studio`, `rating_usia`. Constructor meneruskan seluruh data ke parent.
- PHP memiliki atribut tambahan `foto_produk` sesuai ketentuan tugas.
- Method program: constructor tiap class, `tampilkan`/`tampilkan_tabel` untuk membuat tabel dinamis, serta operasi tambah melalui input pengguna.

## Alur Program
1. Program membuat lima objek awal `FilmBioskop` sebelum input pengguna.
2. Menu menerima pilihan `Tambah data`, `Tampilkan data`, atau `Keluar`.
3. Operasi tambah membaca seluruh atribut objek dari pengguna lalu memasukkannya ke list/vector/session.
4. Operasi tampil menampilkan seluruh atribut dari semua objek dalam satu tabel dengan lebar kolom menyesuaikan data.
5. `cpp`, `java`, dan `python` menerima input interaktif. PHP menerima input melalui HTML form.

## Struktur Folder
```text
cpp/       film.h, main.cpp, testcase.txt
java/      Film.java, Main.java, testcase.txt
python/    film.py, main.py, testcase.txt
php/       Film.php, main.php, testcase.txt
Dokumentasi/ screenshot dokumentasi
README.md
```

## Cara Menjalankan
```bash
g++ -std=c++17 cpp/main.cpp -o cpp/main && ./cpp/main
javac java/Film.java java/Main.java && java -cp java Main
python3 python/main.py
php -S localhost:8000 -t php
```

Untuk uji input terminal, gunakan isi `testcase.txt` pada folder bahasa masing-masing. PHP dibuka melalui `http://localhost:8000/main.php`, lalu data testcase dimasukkan pada form.

## Dokumentasi
Screenshot hasil pengerjaan tersedia di folder `Dokumentasi`. File testcase tersedia di setiap folder bahasa.

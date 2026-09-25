from film import FilmBioskop

KOLOM = ["ID", "Judul", "Durasi", "Genre", "Sutradara", "Tahun", "Harga", "Studio", "Rating"]


# mengubah input durasi menjadi angka tanpa satuan menit
def baca_durasi(nilai):
    return int(nilai.strip().split()[0])


# menampilkan data film dalam bentuk tabel
def tampilkan_tabel(daftar):
    baris = [[film.id_media, film.judul, f"{film.durasi_menit} m", film.genre,
              film.sutradara, film.tahun_rilis, f"Rp{film.harga_tiket}",
              film.studio, film.rating_usia] for film in daftar]
    lebar = [max(len(str(KOLOM[i])), *(len(str(row[i])) for row in baris)) for i in range(len(KOLOM))]
    garis = "+".join("-" * (nilai + 2) for nilai in lebar)
    print(garis)
    print("|" + "|".join(f" {KOLOM[i]:<{lebar[i]}} " for i in range(len(KOLOM))) + "|")
    print(garis)
    for row in baris:
        print("|" + "|".join(f" {str(row[i]):<{lebar[i]}} " for i in range(len(KOLOM))) + "|")
    print(garis)


# menjalankan menu utama program
def main():
    # menyiapkan data film awal
    daftar = [
        FilmBioskop("F001", "Laskar Pelangi", 125, "Drama", "Riri Riza", 2008, 35000, "Studio 1", "SU"),
        FilmBioskop("F002", "Pengabdi Setan", 107, "Horror", "Joko Anwar", 2017, 40000, "Studio 2", "17+"),
        FilmBioskop("F003", "KKN di Desa Penari", 130, "Horror", "Awi Suryadi", 2022, 45000, "Studio 3", "17+"),
        FilmBioskop("F004", "Ngeri-Ngeri Sedap", 114, "Komedi", "Bene Dion", 2022, 40000, "Studio 4", "13+"),
        FilmBioskop("F005", "Jumbo", 102, "Animasi", "Ryan Adriandhy", 2025, 50000, "Studio 5", "SU"),
    ]
    while True:
        print("\n=== KATALOG FILM BIOSKOP ===")
        print("1. Tambah data\n2. Tampilkan data\n0. Keluar")
        pilihan = input("Pilihan: ")
        if pilihan == "1":
            # menerima data film baru dari pengguna
            nilai = [input(label) for label in ["ID media: ", "Judul: ", "Durasi (menit): ", "Genre: ",
                     "Sutradara: ", "Tahun rilis: ", "Harga tiket: ", "Studio: ", "Rating usia: "]]
            daftar.append(FilmBioskop(nilai[0], nilai[1], baca_durasi(nilai[2]), nilai[3], nilai[4], nilai[5],
                                      nilai[6], nilai[7], nilai[8]))
            print("Data berhasil ditambahkan.")
        elif pilihan == "2":
            # menampilkan data film yang tersimpan
            tampilkan_tabel(daftar)
        elif pilihan == "0":
            break
        else:
            print("Pilihan tidak valid.")


if __name__ == "__main__":
    main()

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    // menampilkan data film dalam bentuk tabel
    static void tampilkan(List<FilmBioskop> daftar) {
        String[] kepala = {"ID", "Judul", "Durasi", "Genre", "Sutradara", "Tahun", "Harga", "Studio", "Rating"};
        List<String[]> rows = new ArrayList<>(); int[] lebar = new int[kepala.length];
        for (int i = 0; i < kepala.length; ++i) lebar[i] = kepala[i].length();
        for (FilmBioskop film : daftar) { String[] row = film.keBaris(); rows.add(row); for (int i = 0; i < row.length; ++i) lebar[i] = Math.max(lebar[i], row[i].length()); }
        StringBuilder garis = new StringBuilder(); for (int value : lebar) garis.append("+").append("-".repeat(value + 2)); garis.append("+");
        System.out.println(garis); cetak(kepala, lebar); System.out.println(garis); for (String[] row : rows) cetak(row, lebar); System.out.println(garis);
    }

    // mencetak satu baris tabel dengan lebar kolom yang sesuai
    static void cetak(String[] row, int[] lebar) { for (int i = 0; i < row.length; ++i) System.out.printf("| %-" + lebar[i] + "s ", row[i]); System.out.println("|"); }

    public static void main(String[] args) {
        // menyiapkan data film awal
        List<FilmBioskop> daftar = new ArrayList<>(List.of(
            new FilmBioskop("F001", "Laskar Pelangi", 125, "Drama", "Riri Riza", 2008, 35000, "Studio 1", "SU"),
            new FilmBioskop("F002", "Pengabdi Setan", 107, "Horror", "Joko Anwar", 2017, 40000, "Studio 2", "17+"),
            new FilmBioskop("F003", "KKN di Desa Penari", 130, "Horror", "Awi Suryadi", 2022, 45000, "Studio 3", "17+"),
            new FilmBioskop("F004", "Ngeri-Ngeri Sedap", 114, "Komedi", "Bene Dion", 2022, 40000, "Studio 4", "13+"),
            new FilmBioskop("F005", "Jumbo", 102, "Animasi", "Ryan Adriandhy", 2025, 50000, "Studio 5", "SU")));
        Scanner input = new Scanner(System.in); int pilihan;
        do {
            System.out.println("\n=== KATALOG FILM BIOSKOP ===\n1. Tambah data\n2. Tampilkan data\n0. Keluar");
            System.out.print("Pilihan: "); pilihan = Integer.parseInt(input.nextLine());
            if (pilihan == 1) {
                // menerima data film baru dari pengguna
                System.out.print("ID media: "); String id = input.nextLine(); System.out.print("Judul: "); String judul = input.nextLine();
                System.out.print("Durasi (menit): "); int durasi = Integer.parseInt(input.nextLine()); System.out.print("Genre: "); String genre = input.nextLine();
                System.out.print("Sutradara: "); String sutradara = input.nextLine(); System.out.print("Tahun rilis: "); int tahun = Integer.parseInt(input.nextLine());
                System.out.print("Harga tiket: "); int harga = Integer.parseInt(input.nextLine()); System.out.print("Studio: "); String studio = input.nextLine();
                System.out.print("Rating usia: "); String rating = input.nextLine(); daftar.add(new FilmBioskop(id, judul, durasi, genre, sutradara, tahun, harga, studio, rating));
                System.out.println("Data berhasil ditambahkan.");
            } else if (pilihan == 2) {
                // menampilkan data film yang tersimpan
                tampilkan(daftar);
            }
        } while (pilihan != 0);
        input.close();
    }
}

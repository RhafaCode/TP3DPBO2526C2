package Program;

import java.util.ArrayList;
import java.util.List;

// Klinik mengelola daftar dokter dan pasien serta menampilkan datanya.
public class Klinik {
    private final String namaKlinik;
    private final List<Dokter> daftarDokter = new ArrayList<>();
    private final List<Pasien> daftarPasien = new ArrayList<>();

    public Klinik(String namaKlinik) {
        this.namaKlinik = namaKlinik;
    }

    // Tambahkan objek ke daftar sesuai jenisnya.
    public void tambahDokter(Dokter dokter) {
        daftarDokter.add(dokter);
    }

    public void tambahPasien(Pasien pasien) {
        daftarPasien.add(pasien);
    }

    // Cetak data identitas umum dan informasi khusus tiap objek.
    public void tampilkanSemuaData() {
        System.out.println("\n=== " + namaKlinik + " ===");
        System.out.println("Daftar Dokter (" + daftarDokter.size() + ")");
        // Indeks daftar diubah menjadi nomor tampilan yang dimulai dari satu.
        for (int i = 0; i < daftarDokter.size(); i++) {
            Dokter dokter = daftarDokter.get(i);
            System.out.printf("%d. Nama: %s | Usia: %d | Gender: %s | Spesialis: %s | Jam praktik: %s%n",
                    i + 1, dokter.getNama(), dokter.getUsia(), dokter.getGender(),
                    dokter.getSpesialis(), dokter.getJamPraktik());
        }

        System.out.println("Daftar Pasien (" + daftarPasien.size() + ")");
        for (int i = 0; i < daftarPasien.size(); i++) {
            Pasien pasien = daftarPasien.get(i);
            System.out.printf("%d. Nama: %s | Usia: %d | Gender: %s | Keluhan: %s | No. rekam medis: %s%n",
                    i + 1, pasien.getNama(), pasien.getUsia(), pasien.getGender(),
                    pasien.getKeluhan(), pasien.getNomorRekamMedis());
        }
    }
}
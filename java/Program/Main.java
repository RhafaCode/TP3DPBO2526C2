package Program;

public class Main {
    public static void main(String[] args) {
        // Buat klinik dan isi data awal untuk dokter serta pasien.
        Klinik klinik = new Klinik("Klinik Sehat Sentosa");

        klinik.tambahDokter(new Dokter("dr. Nadia Putri", 38, "Perempuan", "Umum", "08.00-12.00"));
        klinik.tambahDokter(new Dokter("dr. Bima Pratama", 42, "Laki-laki", "Anak", "13.00-17.00"));
        klinik.tambahPasien(new Pasien("Rani", 24, "Perempuan", "Demam dan batuk", "RM-2026-001"));
        klinik.tambahPasien(new Pasien("Dito", 9, "Laki-laki", "Pemeriksaan rutin", "RM-2026-002"));

        // Tampilkan kondisi awal sebelum data baru dimasukkan.
        System.out.println("DATA SEBELUM PENAMBAHAN");
        klinik.tampilkanSemuaData();

        // Tambahkan satu dokter dan satu pasien untuk menunjukkan perubahan data.
        klinik.tambahDokter(new Dokter("dr. Siti Rahma", 35, "Perempuan", "Gigi", "09.00-14.00"));
        klinik.tambahPasien(new Pasien("Fajar", 31, "Laki-laki", "Sakit gigi", "RM-2026-003"));

        System.out.println("\nDATA SETELAH PENAMBAHAN");
        klinik.tampilkanSemuaData();
    }
}
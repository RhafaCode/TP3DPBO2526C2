package Program;

// Kelas dasar yang menyimpan identitas umum dokter dan pasien.
public class Person {
    private final String nama;
    private final int usia;
    private final String gender;

    // Simpan data identitas yang diwarisi oleh kelas turunan.
    public Person(String nama, int usia, String gender) {
        this.nama = nama;
        this.usia = usia;
        this.gender = gender;
    }

    // Getter menyediakan akses baca ke data identitas.
    public String getNama() { return nama; }
    public int getUsia() { return usia; }
    public String getGender() { return gender; }
}
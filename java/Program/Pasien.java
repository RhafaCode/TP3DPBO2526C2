package Program;

// Pasien mewarisi identitas umum dan menambahkan data pemeriksaan.
public class Pasien extends Person {
    private final String keluhan;
    private final String nomorRekamMedis;

    // Isi identitas melalui kelas dasar, lalu simpan data medis pasien.
    public Pasien(String nama, int usia, String gender, String keluhan, String nomorRekamMedis) {
        super(nama, usia, gender);
        this.keluhan = keluhan;
        this.nomorRekamMedis = nomorRekamMedis;
    }

    // Getter untuk keluhan dan nomor rekam medis pasien.
    public String getKeluhan() { return keluhan; }
    public String getNomorRekamMedis() { return nomorRekamMedis; }
}
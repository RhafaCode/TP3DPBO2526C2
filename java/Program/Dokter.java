package Program;

// Dokter mewarisi identitas umum dan menyimpan informasi praktik.
public class Dokter extends Person {
    private final String spesialis;
    private final String jamPraktik;

    // Isi identitas melalui kelas dasar, lalu simpan data praktik dokter.
    public Dokter(String nama, int usia, String gender, String spesialis, String jamPraktik) {
        super(nama, usia, gender);
        this.spesialis = spesialis;
        this.jamPraktik = jamPraktik;
    }

    // Getter untuk spesialisasi dan jadwal praktik dokter.
    public String getSpesialis() { return spesialis; }
    public String getJamPraktik() { return jamPraktik; }
}
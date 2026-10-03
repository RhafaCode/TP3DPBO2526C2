package Program;

public class Pasien extends Person {
    private final String keluhan;
    private final String nomorRekamMedis;

    public Pasien(String nama, int usia, String gender, String keluhan, String nomorRekamMedis) {
        super(nama, usia, gender);
        this.keluhan = keluhan;
        this.nomorRekamMedis = nomorRekamMedis;
    }

    public String getKeluhan() { return keluhan; }
    public String getNomorRekamMedis() { return nomorRekamMedis; }
}
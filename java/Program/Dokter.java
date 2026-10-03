package Program;

public class Dokter extends Person {
    private final String spesialis;
    private final String jamPraktik;

    public Dokter(String nama, int usia, String gender, String spesialis, String jamPraktik) {
        super(nama, usia, gender);
        this.spesialis = spesialis;
        this.jamPraktik = jamPraktik;
    }

    public String getSpesialis() { return spesialis; }
    public String getJamPraktik() { return jamPraktik; }
}
package Program;

public class Person {
    private final String nama;
    private final int usia;
    private final String gender;

    public Person(String nama, int usia, String gender) {
        this.nama = nama;
        this.usia = usia;
        this.gender = gender;
    }

    public String getNama() { return nama; }
    public int getUsia() { return usia; }
    public String getGender() { return gender; }
}
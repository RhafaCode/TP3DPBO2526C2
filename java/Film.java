// menyimpan data dasar setiap media
class Media {
    protected String idMedia, judul;
    protected int durasiMenit;
    Media(String id, String nama, int durasi) { idMedia = id; judul = nama; durasiMenit = durasi; }
}

// menambahkan informasi khusus film
class Film extends Media {
    protected String genre, sutradara;
    protected int tahunRilis;
    Film(String id, String nama, int durasi, String jenis, String director, int tahun) {
        super(id, nama, durasi); genre = jenis; sutradara = director; tahunRilis = tahun;
    }
}

// menyimpan data film yang tayang di bioskop
class FilmBioskop extends Film {
    private int hargaTiket;
    private String studio, ratingUsia;
    FilmBioskop(String id, String nama, int durasi, String jenis, String director, int tahun, int harga, String ruang, String rating) {
        super(id, nama, durasi, jenis, director, tahun); hargaTiket = harga; studio = ruang; ratingUsia = rating;
    }
    String[] keBaris() { return new String[]{idMedia, judul, durasiMenit + " m", genre, sutradara, String.valueOf(tahunRilis), "Rp" + hargaTiket, studio, ratingUsia}; }
}

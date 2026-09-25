<?php
// menyimpan data dasar setiap media
class Media {
    public function __construct(public string $id_media, public string $judul, public int $durasi_menit) {}
}

// menambahkan informasi khusus film
class Film extends Media {
    public function __construct(string $id, string $judul, int $durasi, public string $genre, public string $sutradara, public int $tahun_rilis) {
        parent::__construct($id, $judul, $durasi);
    }
}

// menyimpan data film yang tayang di bioskop
class FilmBioskop extends Film {
    public function __construct(string $id, string $judul, int $durasi, string $genre, string $sutradara, int $tahun,
                                public int $harga_tiket, public string $studio, public string $rating_usia, public string $foto_produk) {
        parent::__construct($id, $judul, $durasi, $genre, $sutradara, $tahun);
    }
}

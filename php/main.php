<?php
require_once __DIR__ . '/Film.php';
session_start();

// menyiapkan data film awal dalam session
if (!isset($_SESSION['film'])) {
    $_SESSION['film'] = [
        new FilmBioskop('F001', 'Laskar Pelangi', 125, 'Drama', 'Riri Riza', 2008, 35000, 'Studio 1', 'SU', 'poster-laskar.jpg'),
        new FilmBioskop('F002', 'Pengabdi Setan', 107, 'Horror', 'Joko Anwar', 2017, 40000, 'Studio 2', '17+', 'poster-pengabdi.jpg'),
        new FilmBioskop('F003', 'KKN di Desa Penari', 130, 'Horror', 'Awi Suryadi', 2022, 45000, 'Studio 3', '17+', 'poster-kkn.jpg'),
        new FilmBioskop('F004', 'Ngeri-Ngeri Sedap', 114, 'Komedi', 'Bene Dion', 2022, 40000, 'Studio 4', '13+', 'poster-ngeri.jpg'),
        new FilmBioskop('F005', 'Jumbo', 102, 'Animasi', 'Ryan Adriandhy', 2025, 50000, 'Studio 5', 'SU', 'poster-jumbo.jpg')
    ];
}
$pesan = '';

// menambahkan data film dari form
if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    $_SESSION['film'][] = new FilmBioskop($_POST['id_media'], $_POST['judul'], (int) $_POST['durasi_menit'], $_POST['genre'], $_POST['sutradara'], (int) $_POST['tahun_rilis'], (int) $_POST['harga_tiket'], $_POST['studio'], $_POST['rating_usia'], $_POST['foto_produk']);
    $pesan = 'Data berhasil ditambahkan.';
}
$kolom = ['ID', 'Judul', 'Durasi', 'Genre', 'Sutradara', 'Tahun', 'Harga', 'Studio', 'Rating', 'Foto Produk'];
?>
<!-- menampilkan form dan daftar film -->
<!doctype html><html lang="id"><head><meta charset="utf-8"><title>Katalog Film Bioskop</title><style>body{font-family:Arial,sans-serif;margin:24px}form{display:grid;grid-template-columns:repeat(3,1fr);gap:8px;max-width:900px}input,button{padding:8px}table{border-collapse:collapse;margin-top:24px;width:100%}th,td{border:1px solid #999;padding:8px;text-align:left}th{background:#1d3557;color:#fff}img{width:45px;height:60px;object-fit:cover}.pesan{color:#176b36}</style></head><body>
<h1>Katalog Film Bioskop</h1><?php if ($pesan): ?><p class="pesan"><?= htmlspecialchars($pesan) ?></p><?php endif; ?>
<h2>Tambah Data</h2><form method="post"><?php foreach (['id_media'=>'ID Media','judul'=>'Judul','durasi_menit'=>'Durasi (menit)','genre'=>'Genre','sutradara'=>'Sutradara','tahun_rilis'=>'Tahun Rilis','harga_tiket'=>'Harga Tiket','studio'=>'Studio','rating_usia'=>'Rating Usia','foto_produk'=>'Foto Produk'] as $name => $label): ?><label><?= $label ?><input name="<?= $name ?>" required></label><?php endforeach; ?><button type="submit">Tambah Data</button></form>
<h2>Seluruh Data</h2><table><tr><?php foreach ($kolom as $judulKolom): ?><th><?= $judulKolom ?></th><?php endforeach; ?></tr><?php foreach ($_SESSION['film'] as $film): ?><tr><td><?= htmlspecialchars($film->id_media) ?></td><td><?= htmlspecialchars($film->judul) ?></td><td><?= $film->durasi_menit ?> m</td><td><?= htmlspecialchars($film->genre) ?></td><td><?= htmlspecialchars($film->sutradara) ?></td><td><?= $film->tahun_rilis ?></td><td>Rp<?= $film->harga_tiket ?></td><td><?= htmlspecialchars($film->studio) ?></td><td><?= htmlspecialchars($film->rating_usia) ?></td><td><?= htmlspecialchars($film->foto_produk) ?></td></tr><?php endforeach; ?></table></body></html>

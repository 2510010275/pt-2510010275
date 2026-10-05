#  Latihan Mandiri Pertemuan 2

## Latihan 1 – Menambahkan Semester pada SiNilai v0.1

Tugas:
Menambahkan satu data lagi ke SiNilai v0.1.

Data yang ditambahkan:
Semester

Tipe data:
int

Perubahan yang dilakukan:
Menambahkan variabel semester, input semester, dan menampilkan semester di kartu data mahasiswa.


## Latihan 2 – Menampilkan `bool` sebagai `true/false`

Tugas:
Ubah `tipe_dasar.cpp` supaya `lulus` dicetak sebagai `true/false`, bukan `1/0`.

Perubahan yang dilakukan:
Menambahkan `cout << boolalpha;` sebelum menampilkan variabel `lulus`.

Hasil:
Lulus ditampilkan sebagai `true`.

## Latihan 3 – `int nilai = 85.7;` dan `int nilai{85.7};`

Tugas:
Coba `int nilai = 85.7;` lalu cetak. Kemudian ganti menjadi `int nilai{85.7};`. Catat perbedaan sikap compiler pada keduanya.

Percobaan pertama:
`int nilai = 85.7;`

Hasil:
Berhasil di-build dan nilainya menjadi 85.

Percobaan kedua:
`int nilai{85.7};`

Hasil:
Build gagal dengan error `narrowing conversion`.

Perbedaannya:
`int nilai = 85.7;` masih membuang angka pecahannya, sedangkan `int nilai{85.7};` ditolak oleh compiler karena dianggap narrowing conversion(perubahan tipe data yang bisa menyebabkan sebagian nilai hilang).

## Latihan 4 – Nama Variabel yang Kurang Jelas

Tugas:
Cari lima nama variabel yang menurutmu kurang jelas, lalu usulkan nama yang lebih jelas.

| Nama yang kurang jelas | Nama yang lebih jelas |
|---|---|
| `data` | `nama_mahasiswa` |
| `nilai` | `nilai_uts` |
| `jumlah` | `jumlah_mahasiswa` |
| `hasil` | `rata_rata_nilai` |
| `info` | `informasi_mahasiswa` |
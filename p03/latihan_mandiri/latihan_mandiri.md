# Latihan Mandiri P03

## Latihan 1 — Konversi Detik

### Soal
Membuat program yang membaca jumlah detik (`int`) lalu menampilkannya sebagai jam, menit, dan detik.

### File
`latihan1_detik.cpp`

### Hasil Pengujian
Input:
`3671`

Output:
`1 jam 1 menit 11 detik`

### Catatan
- `/` digunakan untuk mendapatkan hasil pembagian bilangan bulat.
- `%` digunakan untuk mendapatkan sisa pembagian.
- 1 jam = 3600 detik.
- 1 menit = 60 detik.

## Latihan 2 — Pembagian dan Sisa

### Soal
Membuat program yang membaca dua bilangan bulat lalu menampilkan hasil bagi dan sisa bagi.

### File
`latihan2_bagi.cpp`

### Hasil Pengujian
Input:
`17` dan `5`

Output yang diharapkan:
`17 / 5 = 3 sisa 2`

### Catatan
- `/` digunakan untuk mendapatkan hasil bagi bilangan bulat.
- `%` digunakan untuk mendapatkan sisa pembagian.

## Latihan 3 — Selisih Nilai Akhir dan Rerata Polos

### Soal
Mengubah SiNilai v0.2 agar menampilkan selisih antara nilai akhir dan rerata polos.

### File
`latihan3_selisih.cpp`

### Hasil Pengujian
Input:
- Kehadiran: 90
- Mingguan: 80
- UTS: 85
- UAS: 90

Output:
- Nilai akhir: 84.25
- Rerata polos: 86.25
- Selisih: -2

### Catatan
- Selisih dihitung dengan `nilai_akhir - rerata_polos`.
- Nilai akhir dan rerata polos sama persis ketika selisihnya `0`.
- Contohnya, jika semua komponen nilainya sama, maka keduanya juga sama.

## Latihan 4 — Perbandingan Ekspresi C++ dan Python

### File
`latihan4_perbandingan.py`

### Ekspresi 1
C++:
`2 + 3 * 4 = 14`

Python:
`2 + 3 * 4 = 14`

Hasil: **Sama**

Alasan:
Karena perkalian dikerjakan lebih dulu daripada penjumlahan.

### Ekspresi 2
C++:
`2 * 3 / 4 = 1`

Python:
`2 * 3 / 4 = 1.5`

Hasil: **Beda**

Alasan:
Di C++, `2 * 3` menghasilkan `6`, lalu `6 / 4` adalah pembagian `int` jadi pecahannya dibuang dan hasilnya `1`.
Di Python, operator `/` menghasilkan nilai pecahan sehingga hasilnya `1.5`.

### Ekspresi 3
C++:
`2 / 4 * 3 = 0`

Python:
`2 / 4 * 3 = 1.5`

Hasil: **Beda**

Alasan:
Di C++, `2 / 4` adalah pembagian bilangan bulat jadi hasilnya `0`, lalu `0 * 3` menghasilkan `0`.
Di Python, `2 / 4` menghasilkan `0.5`, lalu `0.5 * 3` hasilnya `1.5`.
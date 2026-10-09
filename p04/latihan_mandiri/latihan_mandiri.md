# Latihan Mandiri P04

## Latihan 1 — Flowchart Huruf Mutu

### Soal
Menggambar flowchart lengkap untuk TODO 1, yaitu menentukan tujuh tingkatan huruf mutu (A, B+, B, C+, C, D, E), yang diurutkan dari nilai 80 turun ke 40.

### File
`latihan1_flowchart.jpg`

### Hasil Pengujian
Flowchart dibuat di kertas dan difoto. Di Flowchart ada enam keputusan untuk memeriksa batas nilai dari `nilai_akhir >= 80` sampai `nilai_akhir >= 40`, dan tujuh kemungkinan keluaran huruf mutu.

### Catatan
- Pemeriksaan dilakukan dari nilai yang paling tinggi ke nilai yang paling rendah.
- Setiap keputusan memiliki dua cabang, yaitu Ya dan Tidak.
- Jika kondisi Ya, huruf mutu yang sesuai akan dipilih.
- Jika kondisi Tidak, pemeriksaan berlanjut ke batas nilai berikutnya.
- Pola keputusan dan pemeriksaan bertingkat berulang seperti pada contoh Gambar 4, tapi latihan ini punya enam keputusan dan tujuh kemungkinan keluaran.

## Latihan 2 — Mencari Bilangan Terbesar

### Soal
Membuat program yang membaca tiga bilangan dan mencetak bilangan yang terbesar. Flowchart dibuat terlebih dahulu sebelum menulis kode.

### File
- `latihan2_terbesar.cpp`
- `latihan2_flowchart.jpg`

### Hasil Pengujian
Pengujian 1:
Input: `12`, `25`, `17`
Output: `Bilangan terbesar: 25`

Pengujian 2:
Input: `30`, `10`, `20`
Output: `Bilangan terbesar: 30`

### Catatan
- `if` memeriksa apakah bilangan yang pertama terbesar?.
- `else if` memeriksa apakah bilangan yang kedua terbesar?.
- `else` memilih bilangan ketiga kalau dua kondisi sebelumnya tidak terpenuhi.
- Operator `&&` berarti kedua kondisi harus benar.

## Latihan 3 — Menentukan Tahun Kabisat

### Soal
Membuat program yang membaca tahun lalu menentukan apakah tahun tersebut merupakan tahun kabisat menggunakan operator %, &&, dan ||.

### File
`latihan3_kabisat.cpp`

### Hasil Pengujian
Pengujian 1:
Input: `2024`
Output:
`2024 adalah tahun kabisat.`

Pengujian 2:
Input: `1900`
Output:
`1900 bukan tahun kabisat.`

Pengujian 3:
Input: `2000`
Output:
`2000 adalah tahun kabisat.`

### Catatan
- `%` digunakan untuk memeriksa sisa pembagian.
- `&&` berarti kedua kondisi harus benar.
- `||` berarti salah satu kondisi benar sudah cukup.
- Tahun kabisat habis dibagi 4 dan tidak habis dibagi 100, atau habis dibagi 400.

## Latihan 4 — Menu dengan switch dan char

### Soal
Mengubah program menu agar pilihan dibaca sebagai char ('1', '2', '3') dan menambahkan pilihan 'k' untuk keluar.

### File
`latihan4_switch.cpp`

### Hasil Pengujian
Pengujian 1:
Input: `1`
Output: `Menampilkan kartu nilai...`

Pengujian 2:
Input: `2`
Output: `Menghitung ulang...`

Pengujian 3:
Input: `3`
Output: `Sampai jumpa.`

Pengujian 4:
Input: `k`
Output: `Sampai jumpa.`

Pengujian 5:
Input: `x`
Output: `Pilihan tidak dikenal.`

### Catatan
- Variabel `pilihan` menggunakan tipe `char`.
- `case` menggunakan kutip tunggal, seperti `case '1':`.
- `case '3':` dan `case 'k':` menjalankan tindakan yang sama.
- `break` digunakan supaya program tidak melanjutkan ke kasus berikutnya.
- `default` akan menangani pilihan yang tidak tersedia.

## Latihan 5 — Percabangan dengan switch

### Soal
Menulis ulang `bertingkat.cpp` menggunakan `switch` dengan `static_cast<int>(nilai) / 10`, lalu membandingkan hasilnya dengan `if-else` bertingkat untuk nilai 79.9.

### File
`latihan5_bertingkat_switch.cpp`

### Hasil Pengujian
Pengujian 1:

Input:
`79.9`

Output:
`Nilai akhir: 79.9`
`Huruf mutu: B`

### Catatan
- `static_cast<int>(nilai)` memotong bagian desimal. Nilai 79.9 menjadi 79.
- Pembagian `79 / 10` menghasilkan 7 karena menggunakan bilangan bulat.
- Nilai tersebut masuk ke `case 7`, sehingga huruf mutu yang ditampilkan adalah B.
- Hasilnya berbeda dengan `if-else` bertingkat yang memiliki batas B+ mulai dari 75. Nilai 79.9 mendapat B+ pada versi itu, tapi B pada versi `switch` ini.
# P03 Ekspresi dan Operator: Menghitung Nilai Akhir

Folder kode Pertemuan 3 Pemrograman Terstruktur. Buka folder ini di Visual Studio Code
(File, Open Folder) supaya pengaturan di `.vscode` ikut terpakai.

## Isi

| Berkas | Kegunaan |
|---|---|
| `operator.cpp` | Lima operator aritmetika pada int dan double; pembagian bilangan bulat dan bedanya dengan Python |
| `prioritas.cpp` | Prioritas dan asosiativitas operator, operator gabungan `+=` dan `++`. Tebak dulu, baru jalankan |
| `campuran.cpp` | Ekspresi campuran int dan double: tiga cara menghitung rata-rata, hanya satu yang benar |
| `sinilai_v02_awal.cpp` | Starter SiNilai v0.2: bagian input dari v0.1 sudah jadi, lengkapi perhitungan nilai akhir |
| `contoh_masukan.txt` | Masukan uji yang sama dengan Pertemuan 2: `./sinilai_v02 < contoh_masukan.txt` |
| `.vscode/`, `.gitignore` | Sama dengan pertemuan sebelumnya |
| `_kunci/` | Kunci SiNilai v0.2, hanya untuk dosen |

## Keluaran SiNilai v0.2 yang diharapkan (bagian akhir)

```
--- Kartu Nilai Mahasiswa ---
Nama        : Siti Aminah
NPM         : 2024010101
Nilai akhir : 83.975
Rerata polos: 85.875
```

Nilai akhir = 100 x 0,10 + 85,5 x 0,45 + 78 x 0,25 + 80 x 0,20 = 10 + 38,475 + 19,5 + 16 = 83,975.

## Yang dikumpulkan mahasiswa

Folder `p03` di repository `pt-NPM` berisi `sinilai_v02.cpp` dan  `README.md`. Lihat Modul Pertemuan 3 bagian E.

## Deklarasi AI

Tuliskan AI yang digunakan, prompt, dan umpan balik AI
Saya menggunakan ChatGPT sebagai alat bantu dalam pengerjaan praktikum Pertemuan 3.

## Untuk Apa AI Digunakan
AI digunakan untuk:
- menjelaskan konsep ekspresi dan operator aritmetika C++;
- membantu memahami pembagian integer dan penggunaan tipe `double`;
- memeriksa kode yang sudah saya kerjakan;
- membantu menemukan dan menjelaskan kesalahan sintaks saat proses build;
- membantu memeriksa hasil pengujian program.

## Cara Saya Memeriksa Hasil
Setiap kode yang diperiksa tetap saya jalankan sendiri menggunakan compiler C++ dan dibandingkan dengan hasil yang diharapkan pada modul. Program SiNilai v0.2 juga diuji menggunakan:
- `contoh_masukan.txt`;
- semua nilai 100;
- semua nilai 0.

Hasil pengujian saya:
- Nilai akhir 83.975 dan rerata polos 85.875;
- semua nilai 100 menghasilkan 100;
- semua nilai 0 menghasilkan 0.

Saya memahami kode yang dikumpulkan dan dapat menjelaskan cara kerja program tersebut.
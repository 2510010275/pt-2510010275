# Latihan Mandiri Pertemuan 1

## Latihan 1 — Rata-rata Lima Nilai

Tugas:
Ubah `rerata.cpp` supaya menghitung rata-rata dari lima nilai.

Bagian yang terpengaruh ada di fungsi utama program (int main()) dan di deklarasi variabel dengan nilai awal (int jumlah =)

Jumlah tempat yang berubah ada 4, yaitu (int kehadiran = 100; int project = 85; + kehadiran + project;)

## Latihan 2 – Error pada `hello.cpp`

Tugas:
Hapus tanda kutip penutup pada `hello.cpp`, lalu bangun ulang. Salin pesan error yang muncul beserta nomor barisnya. Setelah itu, kembalikan kode seperti semula.

Pesan error: hello.cpp:4:18: error: missing terminating " character

Nomor baris: 4

## Latihan 3 – Menghapus `#include <iostream>`

Tugas:
Hapus baris `#include <iostream>` di `hello.cpp`, bangun ulang, lalu jelaskan tahap mana yang gagal dan kenapa pesannya berbeda dengan latihan sebelumnya.

Tahap yang gagal ada di tahap compiler nya, karena dia tidak mengenal objek std::cout ketika kita menghapus #include <iostream>

Alasan pesan berbeda karena di latihan ke 2 itu hanya typo pada tanda kutip saja, sedangkan latihan 3 ini Direktif preprosesor (#include <iostream>) nya menghilang 
| Berkas | Jenis kesalahan | Pesan yang muncul (salin baris pertamanya) | Cara kamu mengetahuinya |
|---|---|---|---|
| k1_sintaks.cpp | [kesalahan sintaks] | [k1_sintaks.cpp:7:5: error: expected ',' or ';' before 'std'] | [ada tanda titik koma yang hilang setelah deklarasi variabel] |
| k2_nama.cpp | [kesalahan nama] | [k2_nama.cpp:8:31: error: 'Nilai' was not declared in this scope; did you mean 'nilai'?] | [ada perbedaan huruf kapital dan huruf kecil pada kata nilai dan bonus belum dikenali compiler] |
| k3_runtime.cpp | [kesalahan runtime] | [tidak ada pesan error saat build] | [build berhasil tanpa error, tapi berhenti mendadak saat memasukkan angka 0] |
| k4_logika.cpp | [kesalahan logika] | [program berjalan mulus, tidak ada error apapun] | [pembagiannya menggunakan bilangan bulat, sedangkan di rerata.cpp pembagiannya menggunakan bilangan pecahan, karena itu hasil dari kesalahan logika ini 81, bukan 81,67 seperti di rerata.cpp] |


Menurutku jenis kesalahan yang paling berbahaya bukan kesalahan besar yang nampak, tapi kesalahan kecil yang tidak kita sadari, karena bisa saja program berjalan mulus, tapi hasilnya tidak sesuai dengan apa yang seharusnya.
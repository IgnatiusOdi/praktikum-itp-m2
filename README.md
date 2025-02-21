# praktikum-itp-m2
## Praktikum ITP M2

### No 1
Buatlah sebuah program yang akan meminta inputan. Program ini hanya akan menerima inputan sepanjang 7 digit atau 8 digit saja (Jika panjang digit inputan tidak 7 atau 8 digit maka keluarkan pesan Invalid Length dan program akan berhenti). Setelah program menerima inputan, program akan memeriksa inputan tersebut apakah bilangan palindrom atau bukan. Bilangan palindrome adalah bilangan yang apabila dibaca dari depan maupun dari belakang, hasilnya sama. Contoh:
```
Input  : 12345678
Output : Bukan Palindrom
 
Input  : 123
Output : Invalid Length
 
Input  : 12344321
Output : Palindrom
 
Input  : 1234321
Output : Palindrom
```

### No 2
Buatlah program yang akan meminta 3 inputan berupa angka yang merupakan  kode dari warna primer atau warna netral yang akan dikenali oleh program. Jika program tidak menemukan warna primer atau warna netral dari inputan kode tersebut maka program akan menampilkan pesan bahwa warna tidak ditemukan. Bila sebuah warna yang sama diinputkan 3x maka tampilkan pesan warna kembar.
Berikut ini merupakan warna primer dan warna netral yang tersedia : 
1. Hitam 
2. Putih 
3. Merah  
4. Kuning 
5. Biru

Berikut merupakan warna yang akan tercipta jika ketiga warna digabungkan (Urutan inputan warna tidak harus sesuai (Dapat di bolak balik), namun yang harus sesuai yaitu warna yang dibutuhkan serta jumlah perbandingan banyak warnanya. Contoh Biru + Putih + Putih berbeda dengan Biru + Biru + Putih):
* Merah  + Kuning  + Biru   → Brown
* Biru   + Merah   + Biru   → Navy
* Merah  + Putih   + Biru   → Magenta
* Putih  + Putih   + Hitam  → Light Grey

Contoh:
```
Warna 1 : 1
Warna 2 : 1
Warna 3 : 1
Hasil   : Warna Kembar 3x

Warna 1 : 3
Warna 2 : 5
Warna 3 : 4
Hasil   : Brown

Warna 1 : 1
Warna 2 : 9
Hasil   : Warna tidak dikenali

Warna 1 : 1
Warna 2 : 2
Warna 3 : 1
Hasil   : Light Grey

Warna 1 : 1
Warna 2 : 2
Warna 3 : 3
Hasil   : Warna belum ditemukan!
```

### Tugas
Buatlah program sederhana dimana akan meminta inputan angka. Program hanya dapat menerima inputan angka sepanjang 6 digit, 8 digit  dan 9 digit. Jika angka yang diinputkan sepanjang 6 atau 8 digit, maka program akan mengenalinya sebagai tanggalan sedangkan jika 9 digit maka akan dikenali sebagai NRP mahasiswa dan setelah itu akan mengeluarkan ouput sesuai role masing-masing. Jika inputan angka panjangnya bukanlah 6 digit, 8 digit atau 9 digit maka tampilkan pesan “Invalid Length” dan setelah itu program akan berhenti. Berikut merupakan penjelasan setiap rolenya : 
* Role Tanggalan (6 atau 8 digit) 
Pada role ini, jika inputan 6 digit maka 2 digit pertama merupakan tanggal, 2 digit selanjutnya merupakan bulan, dan 2 digit terakhir merupakan tahun (Diasumsikan semua tahun di role tanggalan 6 digit menjadi tahun 2000 an bukan 1900 an), sedangkan jika inputan 8 digit maka 2 digit pertama merupakan tanggal, 2 digit selanjutnya merupakan bulan dan 4 digit terakhir merupakan tahun. Inputan tersebut akan diolah sehingga mengeluarkan output berupa tgl berapa, bulan apa dan tahun berapa (contoh dan tampilan dapat dilihat di bawah). Program ini juga akan mengecek apakah tanggalan tersebut valid atau tidak seperti apakah tanggal pada bulan tersebut ada atau tidak (contoh tanggalan tidak valid : 30 Februari 2020, 31 September 2020, dsb), apakah 2 digit untuk bulan berada dalam range 01-12, dan program ini juga dapat mengecek kevalidan tanggal di Februari pada tahun kabisat maupun bukan (Tahun kabisat merupakan tahun yang terdiri dari 366 hari, dimana pada bulan Februari akan memiliki tanggal sebanyak 29 hari).
Berikut merupakan cara untuk mengetahui tahun kabisat : 
1. Jika angka tahun itu habis dibagi 400, maka tahun itu sudah pasti tahun kabisat. 
2. Jika angka tahun itu tidak habis dibagi 400 tetapi habis dibagi 100, maka tahun itu sudah pasti 
bukan merupakan tahun kabisat. 
3. Jika angka tahun itu tidak habis dibagi 400, tidak habis dibagi 100 akan tetapi habis dibagi 4, maka 
tahun itu merupakan tahun kabisat. 
4. Jika angka tahun tidak habis dibagi 400, tidak habis dibagi 100, dan tidak habis dibagi 4, maka 
tahun tersebut bukan merupakan tahun kabisat.  
* Role NRP Mahasiswa (9 digit) 
Inputan akan masuk ke role ini jika panjang digitnya adalah 9 digit. Pada role ini, 9 digit akan di proses sehingga dapat mengeluarkan output tahun angkatan, jurusan, dan no urut mahasiswa. Tahun angkatan didapat dari 3 digit pertama. Dua digit berikutnya merupakan kode jurusan dan 4 digit terakhir merupakan no urut mahasiswa. Program ini dapat mengecek inputan valid atau tidak, seperti apakah digit tahun angkatan valid atau tidak (valid jika digit pertama tahun angkatan berisi angka 1 atau 2, dan jika digit pertama berisi 2 maka digit kedua dan ketiga tidak boleh diatas tahun saat ini), dan kode jurusan apakah terdaftar atau tidak.
Berikut merupakan kode untuk Jurusan :
- 11  → S1 Informatika
- 17  → S1 Desain Komunikasi Visual 
- 18  → S1 Sistem Informasi Bisnis
Contoh:
```
Input  : 1234567890
Output : Invalid Length

Input  : 000000
Output : Invalid Date and Month

Input  : 310920
Output : Invalid Date

Input  : 12132019
Output : Invalid Month

Input  : 29022019
Output : Invalid Date

Input  : 918116694
Output : Invalid Year

Input  : 218996694
Output : Invalid Major

Input  : 090919
Output
Tanggal: 09
Bulan  : September
Tahun  : 2019

Input  : 090920
Output
Tanggal: 09
Bulan  : September
Tahun  : 2020

Input  : 310820
Output
Tanggal: 31
Bulan  : Agustus
Tahun  : 2020

Input  : 28042000
Output
Tanggal  : 28
Bulan    : April
Tahun    : 2000

Input  : 29022020
Output
Tanggal: 29
Bulan  : Februari
Tahun  : 2020

Input  : 218116694
Output
Tahun Ajaran: 2018
Jurusan     : S1 Informatika
No Urut     : 6694

Input  : 154186695
Output
Tahun Ajaran: 1954
Jurusan     : S1 Sistem Informasi Bisnis
No Urut     : 6695
```

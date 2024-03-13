<div align="center">
  <h1 style="text-align: center;font-weight: bold">Praktikum 3<br>SysOp</h1>
  <h4 style="text-align: center;">Dosen Pengampu : Dr. Ferry Astika Saputra, S.T., M.Sc.</h4>
</div>
<br />
<div align="center">
  <img src="https://upload.wikimedia.org/wikipedia/id/4/44/Logo_PENS.png" alt="Logo PENS">
  <h3 style="text-align: center;">Disusun Oleh : </h3>
  <p style="text-align: center;">
    <strong>Mochammad Fahril Rizal (3123500013)</strong><br>
    <strong>Adrian Yoga Chrisarianto (3123500021)</strong><br>
    <strong>Muhammad Arief Wicaksono Putra Santoso (3122500022)</strong>
  </p>

<h3 style="text-align: center;line-height: 1.5">Politeknik Elektronika Negeri Surabaya<br>Departemen Teknik Informatika Dan Komputer<br>Program Studi Teknik Informatika<br>2023/2024</h3>
  <hr><hr>
</div>

## Daftar Isi
1. [Pendahuluan](#about-cpu)
1. [Soal 1](#1-buatlah-presentasi-langkah-demi-langkah-tentang-siklus-cpu-fetchdecodeexecute-utk-mengeksekusi-sebuah-program-jelaskan-juga-peran-dari-bahasa-pemrograman-dan-compiler-begitu-juga-dengan-peran-dari-sistem-operasi-gunakan-referensi--video-referensi-1-dan-video-referensi-2)
2. [Soal 2](#2-apabila-debian-vm-mu-masih-belum-terdapat-packeage-gcc-make-dan-git-lakukan-instalasi-dan-catat-setiap-langkahnya)
3. [Soal 3](#3-jalankan-vm-debian-anda-lalu-lakukan-clone-httpsgithubcomferryastikaflops-iops-compile-dan-eksekusi-sesuai-petunjuk-sesuiakan-jumlah-thread-dengan-jumlah-cpu-yang-ada-di-vm-debianmu-catat-hasilnya-dan-jelaskan-arti-dari-hasil-ekskusi-lakukan-sebanyak-5-kali-bandingkan-hasilnya-anatar-temanmu-buat-plot-perbandinnga-hasil-untuk-masing-masing-pc-di-tiap-kelompokmu-analisa-hasil-percobaan-tadi-dan-beri-kesimpulan-tentang-iops-dan-flops)
4. [Hasil Brenchmark](#hasil-tes-brenchmark)
5. [Referensi](#referensi)

# About CPU
CPU (Control Processing Unit) adalah komponen utama yang bertanggung jawab atas tugas pemrosesan data dan menjalankan instruksi-instruksi program. CPU tersedia dalam berbagai model dan. masing-masing memerlukan slot tertentu pada Motherboard. 

Sebuah CPU dapat memiliki satu atau beberapa core. CPU dengan satu core hanya dapat menjalankan satu tugas pada satu waktu, sedangkan CPU dengan multicore dapat menjalankan beberapa tugas secara bersamaan.

# SOAL
### 1. Buatlah presentasi langkah demi langkah tentang siklus CPU (fetch,decode,execute) utk mengeksekusi sebuah program. Jelaskan juga peran dari Bahasa pemrograman dan compiler, begitu juga dengan peran dari Sistem Operasi. Gunakan referensi : Video referensi 1 dan Video referensi 2
**Jawab:**
## Link PPT
https://www.canva.com/design/DAF_Nic2c0s/d9138dDte5MskMD75m0JPA/view?utm_content=DAF_Nic2c0s&utm_campaign=designshare&utm_medium=link&utm_source=editor

### 2. Apabila Debian VM mu masih belum terdapat packeage gcc, make dan git, lakukan instalasi dan catat setiap langkahnya!
**Jawab:**
## Installation package gcc, make dan git
1. Masuk ke terminal debian
![App Screenshot](assets/img/terminal.png)

2. Pindah User ke Administrator dengan perintah su root
![App Screenshot](assets/img/terminal.png)

3. Install gcc, make dan git 
![App Screenshot](assets/img/instalasi%20make,%20gcc%20dan%20git.png)

3. Masuk ke admin dengan perintah nano /etc/sudoers
![App Screenshot](assets/img/nano.png)

4. Klik ctrl+c lalu ctrl+x

### 3. Jalankan VM Debian anda, lalu lakukan clone https://github.com/ferryastika/flops-iops. Compile dan eksekusi sesuai petunjuk. Sesuiakan jumlah thread dengan jumlah CPU yang ada di VM Debianmu. Catat hasilnya dan jelaskan arti dari hasil ekskusi. Lakukan sebanyak 5 kali. Bandingkan hasilnya anatar temanmu. Buat Plot perbandinnga hasil untuk masing-masing PC di tiap kelompokmu. Analisa hasil percobaan tadi dan beri kesimpulan tentang IOPS dan FLOPS.
**Jawab:**
## FLOPS dan IOPS

FLOPS (Floating Point Operations Per Second) adalah ukuran kinerja dalam komputasi yang mengukur jumlah operasi titik mengambang yang dapat dilakukan oleh sebuah prosesor dalam satu detik. FLOPS sering digunakan untuk mengukur kecepatan prosesor dalam melakukan perhitungan numerik, seperti yang sering terjadi dalam pemrosesan data ilmiah dan aplikasi kecerdasan buatan yang memerlukan komputasi intensif.

IOPS (Input/Output Operations Per Second) adalah ukuran kinerja dalam sistem penyimpanan komputer yang mengukur jumlah operasi input/output yang dapat dilakukan oleh sistem tersebut dalam satu detik. IOPS sering digunakan untuk mengukur kecepatan dan kinerja penyimpanan, seperti pada hard disk drive (HDD), solid-state drive (SSD), atau sistem penyimpanan jaringan (NAS).

Perbedaan utama antara FLOPS dan IOPS adalah bahwa FLOPS mengukur kinerja prosesor dalam melakukan operasi perhitungan matematika, sedangkan IOPS mengukur kinerja sistem penyimpanan dalam melakukan operasi input/output, seperti membaca atau menulis data. Meskipun keduanya merupakan ukuran kinerja yang penting dalam konteks komputasi, mereka mengukur kinerja pada domain yang berbeda.

## Test brenchmark
1. Buka terminal
![App Screenshot](assets/img/terminal.png)

2. Clone repository git flops dan iops
![App Screenshot](assets/img/instalasi%20flops%20iops.png)

3. Jalankan perintah FLOPS dan catat hasilnya
![App Screenshot](assets/img/flops.png)

4. Jalankan perintah IOPS dan catat hasilnya
![App Screenshot](assets/img/iops.png)

## Hasil Tes Brenchmark
### FLOPS
| Laptop  | Max Single Core #1 | Max Single Core #2 | Max Single Core #3 | Max Single Core #4 | Max Single Core #5 |
|---------|---------------|---------------|---------------|---------------|---------------|
| Fahril  | 7.5 Gigaflops            | 6.8 Gigaflops            | 6.5 Gigaflops            | 6.3 Gigaflops            | 6.5 Gigaflops            |
| Adrian  | 25            | 27            | 24            | 26            | 23            |
| Arief   | 25            | 26            | 23            | 28            | 25            |

### IOPS
| Laptop  | Max Single Core #1 | Max Single Core #2 | Max Single Core #3 | Max Single Core #4 | Max Single Core #5 |
|---------|---------------|---------------|---------------|---------------|---------------|
| Fahril  | 7.4 Gigaiops            | 6.9 Gigaiops            | 7 Gigaiops            | 6.9 Gigaiops            | 6.8 Gigaiops            |
| Adrian  | 25            | 27            | 24            | 26            | 23            |
| Arief   | 25            | 26            | 23            | 28            | 25            |

## Referensi
- [Apa itu CPU](https://aws.amazon.com/id/what-is/cpu/)
- [Test Brenchmark Menggunakan FLOPS dan IOPS](https://github.com/ferryastika/flops-iops)
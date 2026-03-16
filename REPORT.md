# Laporan Programming Assignment 1: Basic C++

Di Assignment 1 ini diperintahkan untuk membuat sebuah program yang menghitung umur seseorang dalam tahun, bulan, dan hari berdasarkan input tanggal ulang tahun. Di program ini, saya tidak memakai template yang disediakan karena saya ingin mengerjakan program ini sesuai dengan kreativitas dan nalar saya. Di program ini saya hanya menggunakan library ctime sebagai library yang menyediakan data kalender di C++. 

Flow program ini sebagai berikut:
1. Mengubah tanggal lahir menjadi epoch time menggunakan std::tm dan mktime().
2. Mengambil waktu sekarang dengan std::time(nullptr).
3. Menghitung selisih waktu dalam detik antara sekarang dan tanggal lahir.
4. Mengonversi selisih detik menjadi tahun, bulan, dan hari dengan perhitungan:
    1 hari = 86400 detik
    1 bulan ≈ 30,44 hari
    1 tahun ≈ 365,2425 hari
5. Menampilkan hasil perhitungan dalam format:
    Years: X
    Months: Y
    Days: Z

Di program ini juga terdapat fitur yang mengulang perintah input tanggal lahir ketika tanggal lahir tidak normal, seperti input yang negatif, bulan yang lebih dari 12, dan hari yang lebih dari 31.
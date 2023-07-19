#include <iostream>
#include <string>
using namespace std;


const int MAX_MAHASISWA =100 ;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
string jurusan[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;

void tambahMahasiswa() {
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Jurusan : ";
		getline(cin, jurusan[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();
		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
}

void tampilkanSemuaMahasiswa() {
	if (jumlahMahasiswa > 0) {
		cout << "========== DATA SEMUA MAHASISWA ============" << endl;
		for (int i = 0; i < jumlahMahasiswa; i++) {
			cout << "NIM :" << NIM[i] << endl;
			cout << "Nama :" << nama[i] << endl;
			cout << "Jurusan :" << jurusan[i] << endl;
			cout << "tahun masuk :" << tahunMasuk[i] << endl;
			cout << endl;
		}

	}
	else {
		cout << "belum ada data mahasiswa." << endl;
	}
}

void algorithmacariMahasiswaByNIM() {
	if (jumlahMahasiswa > 0) {
		int nimCari;
		cout << "Masukkan NIM yang ingin dicari: ";
		cin >> nimCari;
		cin.ignore();

		bool found = false;
		for (int i = 0; i < jumlahMahasiswa; i++) {
			if (NIM[i] == nimCari) {
				cout << "========== DATA MAHASISWA ==========" << endl;
				cout << "NIM       : " << NIM[i] << endl;
				cout << "Nama      : " << nama[i] << endl;
				cout << "Jurusan   : " << jurusan[i] << endl;
				cout << "Tahun Masuk: " << tahunMasuk[i] << endl;
				cout << endl;
				found = true;
				break;
			}
		}

		if (!found) {
			cout << "Mahasiswa dengan NIM " << nimCari << " tidak ditemukan." << endl;
		}
	}
	else {
		cout << "Belum ada data mahasiswa." << endl;
	}
}

void algorithmaSortByTahunMasuk() {
	if (jumlahMahasiswa > 0) {
		int tahunMasukCari;
		cout << "Masukkan tahun masuk yang ingin dicari: ";
		cin >> tahunMasukCari;
		cin.ignore();

		for (int i = 0; i < jumlahMahasiswa; i++) {
			cout << "========== DATA MAHASISWA BERDASARKAN TAHUN MASUK ==========" << endl;
			cout << "NIM       : " << NIM[i] << endl;
			cout << "Nama      : " << nama[i] << endl;
			cout << "Jurusan   : " << jurusan[i] << endl;
			cout << "Tahun Masuk: " << tahunMasuk[i] << endl;
			cout << endl;
		}
	}
	else {
		cout << "Belum ada data mahasiswa." << endl;
	}
}

int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			tambahMahasiswa();
			break;
		case 2:
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			algorithmacariMahasiswaByNIM();
			break;
		case 4:
			algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}

// 2. Berdasarkan studi kasus diatas, algoritma apa saja yang anda gunakan?
//    = prosedural dan binary search
// 3. Jelaskan perbedaan mendasar antara algorithma stack dan queue!
//    = algoritma stack itu last in first out (LIFO) sedangkan algoritma queue itu first in first out (FIFO)
// 4. Jelaskan pada saat bagaimana harus menggunakan algorithma stack?
//    = jika pada saat kita ingin memassukkan datanya dan kita mau menghapus itu datanya tidak menjadi berantakan
// 5. a. Seberapa banyak kedalaman yang dimiliki struktur tersebut?
//    = 16
//    b.Tentukan Benar atau salah cara membaca struktur pohon di atas?
//    = in = benar
//      preorder = benar
//      post = benar
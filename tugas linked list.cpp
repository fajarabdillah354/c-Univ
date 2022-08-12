#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;

// Prototype
void bt_baru();
void tambah_depan();
void tambah_belakang();
void tampil();
void pilih();
int pil;
void hapus_depan();
void hapus_belakang();


// Struct. 1 untuk data dan 1 referensi nya
struct simpul {
	int angka; //data
	struct simpul *next; //referensi
} *baru, *awal=NULL, *akhir=NULL, *bantu, *hapus;


// Program Utama
int main (){
	
	do {
		cout << "\nProgram Linked List" << endl;
		cout << "1. Tambah Data di Depan " << endl;
 		cout << "2. Tambah Data di Belakang " << endl;
 		cout << "3. Tampilkan Data " << endl;
 		cout << "4. Hapus Data di Depan " << endl;
 		cout << "5. Hapus Data di Belakang" << endl;
 		cout << "6. Keluar Program" << endl;
 		cout << "\nSilahkan masukkan pilihan Anda : ";
		cin >> pil;
		pilih();
		
	} while(pil!=6);
	
	return 0;
}


// Function:

// Fungsi Control Flow untuk inputan user 
void pilih() {
	if (pil == 1) {
		tambah_depan(); 
	} else if (pil == 2) {
		tambah_belakang(); 
	} else if (pil == 3) {
		tampil(); 
	} else if (pil == 4) {
		hapus_depan(); 
	} else if (pil == 5) {
		hapus_belakang(); 
	} else if(pil == 6) {
		cout << "\nTerima Kasih Sudah Mencoba Program ini :)" << endl;
	} else {
		cout << "\nPILIHAN YANG ANDA MASUKKAN SALAH!" << endl;
		cout << "\nSILAHKAN MENGULANG PILIHAN ANDA" << endl;
	}
}


// Fungsi untuk menampilkan semua data yang sudah diinputkan
void tampil() {
	if (awal == NULL){
		cout << "\nDATA MASIH KOSONG!" << endl;
		cout << "\nSilahkan Tekan Enter untuk kembali Ke Menu" << endl;
	} else {
		bantu = awal;
		while(bantu!=NULL) {
			cout << " " << bantu->angka;
			bantu = bantu->next;
		}
		
		cout << endl;
		cout << "\nSilahkan Tekan Enter untuk kembali Ke Menu" << endl;
	}
	getch();
}


// fungsi pengimputan data
void bt_baru() {
	cout << "\nTambahkan Data Baru:\n";
	
	baru = (simpul*) malloc (sizeof(struct simpul)); // malloc -> meng-alokasikan data memori agar efisien
	cout << "Input Angka -> ";
	cin >> baru->angka; 
	cout << "\nDATA BERHASIL DITAMBAHKAN!" << endl;
	cout << "\nLakukan Pengecekan Data dengan pilihan Tampil Data" << endl;
	baru->next=NULL; 

	
}


// Fungsi menambahkan data didepan
void tambah_depan() {
	bt_baru(); 

	if(awal==NULL) { 
		awal = baru; 
		akhir = baru;
		
		akhir -> next=NULL; 
	} else { 
		baru->next = awal; 
		awal = baru;
	}
}


// Fungsi menambahkan data dibelakang
void tambah_belakang() {
	bt_baru(); 
	
	if(awal == NULL) { 
		awal = baru; 
	} else { 
		akhir->next=baru; 
	}
	akhir = baru;
	akhir->next=NULL;
}


// Fungsi untuk menghapus data didepan
void hapus_depan(){

	if(awal == NULL){
 		cout << "\nDATA MASIH KOSONG!" << endl;	
 		cout << "\nSilankan Inputkan Data Terlebih dahulu!" << endl;
	} else {
		hapus = awal; 
    	awal = awal->next; 
    	hapus->next = NULL; 
	}

}


// Fungsi untuk menghapus data dibelakang
void hapus_belakang(){
	
	if(awal == NULL){
		cout << "\nDATA MASIH KOSONG!" << endl;	
 		cout << "\nSilankan Inputkan Data Terlebih dahulu!" << endl;	
	} else {
    	bantu = awal;
    	while(bantu->next->next != NULL) {  
      		bantu = bantu->next;
		}
		hapus = bantu->next;
    	bantu->next = NULL; 
  	}

}

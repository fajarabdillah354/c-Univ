#include<iostream>
using namespace std;

struct mahasiswa{
	char nama[20];
	char namaJurusan[20];
	int usia;
};

int main(){
	mahasiswa *ptr,a;
	ptr=&a;
	
	cout<<"--------------- Latihan struct pointer ---------------\n";
	cout<<"masukan nama mahasiswa : ";
	cin>>ptr->nama;
	cout<<"masukan Jurusan kuliah : ";
	cin>>ptr->namaJurusan;
	cout<<"masukan usia anda : ";
	cin>>ptr->usia;
	
	cout<<"==================== Terimakasih telah memasukan data =========================\n";
	cout<<"berikut adalah alamat programmya : "<<endl;
	cout<<ptr->nama<<" mempunyai alamat "<<&a.nama<<endl;
	cout<<ptr->namaJurusan<<" mempunyai alamat "<<&a.namaJurusan<<endl;
	cout<<ptr->usia<<" mempunyai alamat "<<&a.usia<<endl;
	
	
}










/*
======= dasar pointer ========
int main(){
	int *a; //membuat pointer a
	int b;
	a=&b; //memberi value var a = alamat dari b
	b=5;
	
	cout<<"nilai dari b : "<<b<<endl;
	cout<<"nilai dari *a : "<<*a<<endl;
	cout<<"alamat dari a : "<<&b<<endl;
	cout<<"alamat dari &b :"<<a<<endl; 
}
# tanda * tidak harus digunakan untuk pointer tetapi juga bisa untuk mengetahui nilai suatu variabel
   sperti contohnya (cout<<"nilai dari *a : "<<*a<<endl;)

*/

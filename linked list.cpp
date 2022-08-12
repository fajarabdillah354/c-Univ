#include<iostream>
#include<windows.h>
#include<conio.h>

using namespace std;
int pil;
void bt_baru();
void pilih();
void tbh_depan();
void tbh_belakang();
void tampil();

struct simpul{
	int angka;
	struct simpul *next;
} *baru,*awal=NULL, *akhir=NULL, *bantu;

int main(){
	
	do{
		cout<<"programm linked list"<<endl;
		cout<<"\n1. tambah data di depan"<<endl;
		cout<<"2. tambah data di belakang"<<endl;
		cout<<"3. tampilkan data "<<endl;
		cin>>pil;
		pilih();
	}while(pil!=3);
	return 0;	
}

void pilih(){
	int pil;
	if(pil==1){
		tbh_depan();
	}
	else if (pil==2)
		tbh_belakang();
	else if (pil==3)
		tampil();
	else{
		cout<<"selesai"<<endl;
	}
		
}



void bt_baru(){
	cout<<'tambah data ';
	baru = (simpul*) malloc(sizeof(struct simpul));
	cout<<"input angka :"; cin>>baru -> angka;
}

void tbh_depan(){
	bt_baru();
	if(awal == NULL){
		awal = baru;
		akhir = baru;
		akhir->next=NULL;
	}
	else{
		baru ->next = awal;
		awal = baru;
	}
	cout << endl;
	tampil();
}

void tbh_belakang(){
	bt_baru();
	if(awal=NULL){
		awal=baru;
	}
	else{
		akhir->next=NULL;
	}
	akhir=baru;
	akhir->next=NULL;
	cout<<endl;
	tampil();
}

void tampil(){
	if(awal == NULL)
		cout<<"kosong";
	else{
		bantu=awal;
		while (bantu!=NULL){
			cout<<" "<<bantu->angka;
			bantu = bantu->next;
		}
	}
	getch();
}

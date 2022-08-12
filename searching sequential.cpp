#include<iostream>//penggunaan library
using namespace std;//standart library

int main(){//function utama
	int nilai[20],posisi[20],i,n,angka,total=1;//deklarasi beberapa var dengan tipe data int termasuk array,lalu untuk var total bervalue 1
	bool ketemu;//deklarasi var bool dengan tipe data bolean
	cout<<"========= program searching sequential =========="<<endl;//pencetakn string
	cout<<"masukan banyak index yang dimau =";//pencetakan string
	cin>>n;//penginputan kedalam vaar n
	
	for(i=0;i<n;i++){//proses looping dengan menggunakan for
		cout<<"\nmasukan nilai untuk index ke-"<<i+1<<" = ";//pencetakan string dan pemanggilan value index i
		cin>>nilai[i];//penginputan kedalam var nilai dengan index ke i
		
	}//akhir looping for
	cout<<"\nBerikut adalah deretnya = "<<endl;//pencetakan string
	for(i=0;i<n;i++){//looping dengan for
		cout<<nilai[i]<<" - ";//pencetakan hasil looping
	}//akhir looping
	
	cout<<"\nMasukan Angka yang ingin di cari = ";//pencetakan string
	cin>>angka;//penginputaan kedalam var angka
	
	for(i=0;i<n;i++){//looping dengan for
		if(nilai[i]==angka){//pengkondisian saat kondisi loop jika nilai index i samadengan var angka
			ketemu=true;//pemberian value untuk var ketemu
			posisi[total]=i;//pemberian value untuk var posisi dengan index total
			total++;//increment pada var total
			
		}//akhir pengkondisian
	}//akhir looping
	if(ketemu){//pengkondisian jika angka yang dicari ketemu
		cout<<"\nselamat angka yang anda cari berhasil ditemukan\n";//pencetakan string
		cout<<"data ditemukan pada index ke "<<nilai[i]<<endl;//pencetakan string
	}else{//kondisi selain di atas
		cout<<"\nangka yang anda cari tidak ada di index\n";////pencetakan string
	}//akhir pengkondisian
	return 0;//proses pengembalian nilai
	
	/*
	======== algoritma program =========
	1. user akan di minta memasukan banyak angka(data-datanya)
	2. setelah itu user akan menginput angka yang di cari dari data-data angka yang ada
	3. setelah itu jika angka yang dicari = data-data angka
	4. maka program akan mencetak string "selamat angka yang anda cari berhasil ditemukan"
	5. jika tidak akan mencetak "angka tidak ada di index(data-data)"
}

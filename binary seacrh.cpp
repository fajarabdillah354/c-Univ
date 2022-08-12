#include<iostream>//library dalam program
#include<conio.h>//library dalam program

using namespace std;//standar library

int main(){//function main/fungsi utama
	int awal,akhir,tengah,i,index,cari,array[40];//deklarasi variabel-variabel dan array{40} ke dalam tipe data int
	cout<<"Latihan membuat seacrhing binary"<<endl;//perintah mencetak string
	cout<<"masukan banyak index yang dicari : " ;//perintah mencetak string
	cin>>index;//proses penginputan ke dalam variabel index
	for(i=0;i<index;i++){//proses perulangan dengan for i sampai variabel index
		cout<<"masukan indexx ke "<<i+1<<" : ";//isi for yaitu pencetakan string index ke satu
		cin>>array[i];//proses penginputan data ke dalam variabel arrayindex ke i
	}//akhir perulangan
	cout<<"\n berikut adalah bentuk aritmatikanya : \n";//pencetakan string
	for(i=0;i<index;i++){//perulangan dengan for i sampai variabel index
		cout<<array[i]<<" ";//pencetakan untuk variabel array index ke i
	}
	cout<<"Masukan nilai yang akan dicari : ";//pencrtakan string
	cin>>cari;//prosees penginputan data ke variabel cari
	awal=0;//pemberian value untuk variabel awal
	akhir=index-1;//pemberian value untuk variabel akhir
	tengah=(awal+akhir)/2;//pemberian value untuk variabek tengah dengan menggunakan rumus
	while(awal<=akhir){//perungalangan dengan while
		if(array[tengah]<cari){//pengkondisian dengan if jika nilai awal kurang dari samadengan akhir
			awal=tengah+1;//penambahan value untuk variabel awal dalam pengkondisian
		}else if(array[tengah]==cari){//kondisi lain jika nilai tengah sama dengan nilai yang dicari
			cout<<"angka "<<cari<<" ditemukan pada lokasi "<<tengah+1;//pencetakan string
			break;//proses break program
		}else{//kondisi selain di atas
			akhir=tengah-1;//pemberian value untuk akhir
			
		}//akhir kondisi selain di atas
			tengah=(awal+akhir)/2;//pemberian value untuk variabel tengah
    }
		if(awal>tengah){//pengkondisian jika var awal lebih besar dari var tengah 
			cout<<"angka tidak ditemukan pada array di atas "<<endl;//pencetakan string
		}//akhir pengkondisian
	
	
}//akhir function main

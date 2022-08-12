#include <iostream>//library


using namespace std;


int data[20],data2[20],n;//pembutan variabel dan array dalam tipe data

int tuker(int a,int b){//pembutan function tuker dengan parameter int a dan b
	int f;//deklarasi var f
	f=data[a];//pemberian value untuk var f
	data[a]=data[b];//pemberian value unutk data dengan array
	data[b]=f;//pemberian value untuk data dengan array
	
}
int input(){//pembuatan function input
	cout<<"Masukan angka yang anda inginkan = ";//pencetakan string
	cin>>n;//penginputan untuk var n
	for(int i=0;i<n;i++){//perulangan dengan for
		cout<<"Masukan nilai ke "<<i+1<<" : ";//pencetakan string
		cin>>data[i];//penginputan ke dalam var data dengan index i
		data2[i]=data[i];//pemberian value untuk data index ke i
	}
}
int tampil(){//pembuatan function tampil
	for(int i=0;i<n;i++){//perulangan dengan
		cout<<"{ "<<data[i]<<" }";//pencetakan data dengan index ke i
	}
	cout<<endl;
}
int bubblesort(){//pembuatan function bubblesort
	for(int i=1;i<n;i++){//perulangan dengan for
		for(int j=n-1;j>=i;j--){//perulangan dalam perulangan dengan for
			if(data[j]<data[j-1]){//pengkondisian dengan if untuk var data index j kurang dari j-1
				tuker(j,j-1);//proses menukar
			}
		}
		tampil();//pemanggilan function
	}
}
int main(){//function utama
	cout<<"Program membuat buble sort\n\n";//pencetakan string 
	input();//pemanggilan function input
	cout<<"Proses buble sort\n\n";//pencetakan string 
	tampil();//pemanggilan function 
	bubblesort();//pemanggilan fucntion
}










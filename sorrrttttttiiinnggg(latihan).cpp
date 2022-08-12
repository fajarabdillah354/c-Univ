#include <iostream>


using namespace std;


int data[20],data2[20],n;

int tuker(int a,int b){
	int f;
	f=data[a];
	data[a]=data[b];
	data[b]=f;
	
}
int input(){
	cout<<"Masukan angka yang anda inginkan = ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Masukan nilai ke "<<i+1<<" : ";
		cin>>data[i];
		data2[i]=data[i];
	}
}
int tampil(){
	for(int i=0;i<n;i++){
		cout<<"{ "<<data[i]<<" }";
	}
	cout<<endl;
}
int bubblesort(){
	for(int i=1;i<n;i++){
		for(int j=n-1;j>=i;j--){
			if(data[j]<data[j-1]){
				tuker(j,j-1);
			}
		}
		tampil();
	}
}
int main(){
	cout<<"Program membuat buble sort\n\n";
	input();
	cout<<"Proses buble sort\n\n";
	tampil();
	bubblesort();
}










/*int main(){
	int nilai[20],i,j,n,temp;
	cout<<"------------------- Latihan membuat program asending sorting ------------------------"<<endl;
	
	cout<<"masukan banyak angka : ";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"masukan angka ke-"<<i+1<<" : ";
		cin>>nilai[i];
	}
	
	cout<<"Hasil pengurutan angka :\n";
	for(i=0;i<=n;i++){
		for(j=i;j<=n;j++){
			if(nilai[i]<nilai[j]){
				temp=nilai[i];
				nilai[i]=nilai[j];
				nilai[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		cout<<nilai[i]<<" ";
	}
	
	
	
}
*/



/*void sorting(int nilai[],int n){
	int temp,x;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(nilai[j]>nilai[x]){
				x=j;
				temp=nilai[i];
				nilai[i]=nilai[x];
				nilai[x]=temp;
			}
		}
		
	}
}


int main (){
	int nilai[20],n;
	cout<<"------- Latihan desending sort --------\n";
	cout<<"Masukan banyak data yang ada : ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Masukan angka ke- "<<i+1<<" : ";
		cin>>nilai[i];
	}
	
	cout<<"deret yang dihasilkan : \n\n";
	for(int i=0;i<n;i++){
		cout<<nilai[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Angka sebelum di urut : ";
	for(int i=0;i<n;i++){
		cout<<nilai[i]<<" ";
	}
	sorting(nilai,n);
	cout<<"\nAngka setelah di urut : ";
	for(int i=0;i<n;i++){
		cout<<nilai[i]<<" ";
	}
	
}

*/



















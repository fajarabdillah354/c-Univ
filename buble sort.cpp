#include<iostream>
#include<conio.h>

using namespace std;
int data[10],data2[10];
int n;

int nuker(int a,int b){
	int x;
	x = data[b];
	data[b]=data[a];
	data[a]=x;
}

input(){
	cout<<"Masukan angka yang diinginkan = ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Masukan data ke"<<i+1<<" : ";
		cin>>data[i];
		data2[i]=data[i];
	}
	cout<<endl;
}

int tampil(){
	for(int i=0;i<n;i++){
		cout<<"[ "<<data[i]<<" }";
	}
	cout<<endl;
}

int bublesort(){
	for(int i=1;i<n;i++){
		for(int j=n-1;j>=i;j--){
			if(data[j]<data[j-1]){
				nuker(j,j-1);
			}
		}
		tampil();
	}
}

int main(){
	cout<<"latihan program bublesort"<<endl;
	cout<<"-----------------------------\n";
	input();
	cout<<"------ Proses bublesort ------\n";
	tampil();
	bublesort();
}

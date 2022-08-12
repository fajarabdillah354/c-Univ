#include <iostream>
#include <stdio.h>
#include <conio.h>
#define MAX 8 

using namespace std;
typedef struct{
	int data [MAX];
	int head;
	int tail;
}queue;
queue antrian;

void create(){
	 antrian.head=antrian.tail=-1;
	 
}
int isempty(){
	if(antrian.tail==-1){
	return 1;
} 
	else 
	return 0;
}
int isfull(){
	if (antrian.tail==MAX-1)
	return 1;
	else
	return 0;
}
int enqueue(int data){
	if (isempty()==1){
		antrian.head=antrian.tail=0;
		antrian.data[antrian.tail]=data;
	}else
	if (isfull()==0){
		antrian.tail++;
		antrian.data[antrian.tail]=data;
	}
}
int dequeue(){
	int i;
	int e= antrian.data[antrian.head];
	for (i=antrian.head; i<=antrian.tail-1; i++){
		antrian.data[i]= antrian.data[i+1];
	}
	antrian.tail--;
	return e;
}
void clear(){
	antrian.head=antrian.tail=-1;
}
void tampil(){
	if (isempty()==1){
		cout<<"Data Queue Kosong";
	}else
	cout<<"Data pada Queue Adalah : ";
	for (int i = antrian.head; i<=antrian.tail; i++){
		cout<<antrian.data[i]<<"\t";
	}
}
int main(int argc, char** argv) {
	int pilihan;
	int data;
	create();
	
	do{
		cout<<"\n1. Enqueue data"<<endl;
		cout<<"2. Dequeue data"<<endl;
		cout<<"3. Tampilkan"<<endl;
		cout<<"4. Clear"<<endl;
		cout<<"5. Keluar"<<endl;
		
		cout<<"\nMasukkan Pilihan [1-5] : ";cin>>pilihan;
		switch (pilihan){
			case 1:
				cout<<"Masukkan Data : "; cin>>data;
				enqueue(data);
				break;
			
			case 2:
				dequeue();
				break;
				
			case 3:
				tampil();
				break;
			
			case 4:
				clear();
				break;
				
			case 5:
				exit(0);
				break;
		}
	}while(pilihan !=5);
	return 0;
}

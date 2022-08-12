#include<iostream>
using namespace std;

int main(){
	
	int data[10]= {20,25,46,89,75,45,12,56,25,33};
	int caridata,i,awal=0;
	cout<<"seacrh sequential"<<endl;
	cout<<"DATA:";
	
	for (int n = 0;n<10;n++){
		cout<<" "<<data[n];
	}	
	cout<<endl;
	cout<<"\n masukan data yang ingin dicari : ";
	cin>>caridata;
	for(i=0;i<10;i++){
		if(data[i]==caridata){
			awal=1;
			break;
		}
	}
	if(awal==1)
	cout<<"DATA DITEMUKAN PADA INDEX KE[ "<<i<<"]"<<endl;
	else
		cout<<"DATA TIDAK DITEMUKAN "<<endl;
		
	return 0;
}

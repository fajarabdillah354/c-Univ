#include<iostream>
using namespace std;

long fibo(int n){
	if(n==1 || n==2){
		return 1;
	}else{
		return (n-1)+(n-2);
	}
}

int main(){
	int angka;
	cout<<"============ program rekursif Fibonaci ============="<<endl;
	cout<<"masukan nilai fibonaci = ";
	cin>>angka;
	cout<<"nilai Fibonaci dari "<<angka<<" = "<<fibo(angka);
}

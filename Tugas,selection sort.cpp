#include<iostream>
using namespace std;

int main()//function utama
{   int a,k,c,d,g;//deklarasi var dengan tipe data int
    k=4;//pemberian value
    int b[4];//deklarasi var b dengan array 4 bertipe data int
    cout<<"====================== SELECTION SORT ======================"<<endl;//pencetakan string
    cout<<"mengurutkan nilai dari besar ke kecil(desending)"<<endl<<endl;//pencetakan string
    for(a=0;a<k;a++)//perulangan dengan for
    {
        cout<<"Masukkan nilai "<<a+1<<" : ";cin>>b[a];//pencetakan string dengan input var b[a]
    }
    for(a=0;a<k-1;a++)//perulangan
    {
    c=a;//pemberian value var c
        for(d=a+1;d<k;d++)//perualangan dengan for
        {
            if(b[c]<b[d])//pengkonsian dengan if
            {
                c=d;//pemberian value
            }
        }
        g=b[c];//pemberian value
        b[c]=b[a];//pemberian value
        b[a]=g;//pemberian value
    }
    cout<<"\n setelah diurutkan akan menjadi : \n";//pencetakan 
    for(a=0;a<k;a++)//perulangan dengan for
    {
        cout<<b[a]<<" \n";//pencetakan var b[a]
    }
}

#include <iostream>
#include <windows.h>

using namespace std;


typedef struct node{
 char data;
 node *kiri;
 node *kanan;
};

node *akar=NULL;
addNode(node **akar, char isi) {
 if((*akar)==NULL){
 node *baru;
 baru= new node;
 baru->data = isi;
 baru->kiri = NULL;
 baru->kanan = NULL;
 (*akar)=baru;
 }
}

preOrder(node *akar) {
 if(akar !=NULL) {
 printf("%c ", akar->data);
 preOrder(akar->kiri);
 preOrder(akar->kanan);
 }
}

inOrder(node *akar) {
 if(akar !=NULL) {
 inOrder(akar->kiri);
 printf("%c ", akar->data);
 inOrder(akar->kanan);
 }
}

postOrder(node *akar) {
 if(akar !=NULL) {
 postOrder(akar->kiri);
 postOrder(akar->kanan);
 printf("%c ", akar->data);
 }
}

main(){
char abjad;
printf("\n\n\tPosisi Awal Tree:\n\n");
printf("\t       R\n\t      / \\\n\t     A   E\n\t    /\n\t   S\n\t  / \\\n\t I   T\n\n");
addNode(&akar,abjad='R');
addNode(&akar->kiri,abjad='A');
addNode(&akar->kanan,abjad='E');
addNode(&akar->kiri->kiri,abjad='S');
addNode(&akar->kiri->kiri->kiri,abjad='I');
addNode(&akar->kiri->kiri->kanan,abjad='T');
 printf("Tampilan PreOrder  : ");
 preOrder(akar);
 printf("\nTampilan InOrder   : ");
 inOrder(akar);
 printf("\nTampilan PostOrder : ");
 postOrder(akar);
 
 return 0;
 cls
}



/*typedef struct himpunan{
	string name;
	int umur;
	string  bidang;
}anggota;

int main(){
	int i;
	anggota ft;
	for(i=0;i<5;i++){
		cout<<"nama anggota ke- "<<(i+1)<<" = ";cin>>ft.name;
		cout<<"umur ke-"<<(i+1)<<" = ";cin>>ft.umur;
		cout<<"bidang ke-"<<(i+1)<<" = ";cin>>ft.bidang;
		cout<<endl;
	}
}*/










/*struct data{
	string nama;
	string alamat;
	int umur;
	float NIK;
	
};

int main(){
	data person;
	person.nama="fajar abdillah ahmad";
	person.alamat="JL. Radar Selatan No.25 RT09/05 Pondok Gede";
	person.umur=21;
	person.NIK=317200003012;
	
	cout<<"Nama anggota\t = "<<person.nama<<endl;
	cout<<"Alamat anggota\t =  "<<person.alamat<<endl;
	cout<<"usia\t\t = "<<person.umur<<endl;
	cout<<"Nomor Induk penduduk = "<<person.NIK<<endl;
}
*/


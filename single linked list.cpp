#include<iostream>
using namespace std;

struct nisa{
	string gender,kulit,alamat;
	int umur;
	
	nisa *next;
	
};

nisa *head,*tail,*cur,*newnode,*del;

removeawal(){
	del = head;
	head = head->next;
	delete del;
}

removeakhir(){
	del=tail;
	cur = head;
	while(cur->next != tail){
		cur = cur->next;
	}
	tail=cur;
	tail->next = NULL;
	delete del;
}

void createsingle(string gender, string kulit, string alamat, int umur){
	head = new nisa();
	head->gender = gender;
	head->kulit = kulit;
	head->alamat = alamat;
	head->umur = umur;
	head->next = NULL;
	tail = head;
	 
}

void addnew(string gender,string kulit,string alamat,int umur){
	newnode = new nisa();
	newnode->gender = gender;
	newnode->kulit = kulit;
	newnode->alamat = alamat;
	newnode->umur = umur;
	newnode->next = head;
	head=newnode;
	
}

void addlast(string gender,string kulit,string alamat,int umur){
	newnode = new nisa();
	newnode->gender = gender;
	newnode->kulit = kulit;
	newnode->alamat = alamat;
	newnode->umur = umur;
	newnode->next = NULL;
	tail->next = newnode;
}

void cetaksingle(){
	cur = head;
	while(cur!=NULL){
		cout<<"jenis kelamin : "<<cur->gender<<endl;
		cout<<"warna kulit : "<<cur->kulit<<endl;
		cout<<"domisili : "<<cur->alamat<<endl;
		cout<<"usia : "<<cur->umur<<endl;
		
		cur=cur->next;
	}
	
}


	int main(){
		createsingle("wanita","langsat","kramat jati",19);
		cetaksingle();
		
		cout<<endl;
		
		addnew("laki-laki","hitam","priok",20);
		cetaksingle();
		cout<<endl;	
		
		addlast("laki-laki","putih","bandung",21);
		cetaksingle();
		cout<<endl;
		
		
		
		addlast("bencong","busuk","jatinegara",30);
		cetaksingle();
		cout<<endl;
		
		addlast("banci","pucet","jatinegara",30);
		cetaksingle();
		cout<<endl;
		
		removeakhir();
		cetaksingle();
	}

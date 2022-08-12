#include <iostream>
#include <stdlib.h> 
#include <conio.h>
#define MAX 10

using namespace std;

int top=-1,Stack[MAX];

void push(){//function push
    if(top == MAX-1){
        cout << ">> Stack sudah Penuh !" << endl;
    }else{
        top++;
        cout << ">> Masukan Data : ";
        cin >> Stack[top];
        cout << "n\\Pada Index ke \\'" << top << "' \n";
        cout << "Data [" << Stack[top] << "] Telah Ditambah ! " << endl;
    }
}

void pop(){//function pop(mengeluarkan data)
    if(top == -1){
        cout << ">> Stack Kosong !" << endl;
    }else{
        cout << "n\\Data\\ [" << Stack[top] << "] pada index ke '" << top << "' dalam Stack Diambil !" << endl;
        Stack[top--];
    }
}

int clearr(){//funciton clear
    return top = -1;

}

void cetak(){//function cetak
    if (top == -1) {
 cout << "          Stack : ";
        cout << "\n===========================" << endl;
        cout << "          Empty ! \n===========================" << endl;
    }
    else {
        cout << "          Stack : ";
        cout << "\n===========================" << endl;
 for (int i = top; i >= 0; i--){
  cout << "     XXXXX[ " << Stack[i] << " ]XXXXX" << endl;
 }
 cout << "===========================" << endl;
    }
}

int main()//function utama
{
    int choose;
    do {
        cetak
		();
        cout << "\n1. Push"
             << "\n2. Pop"
             << "\n3. Clear"
             << "\n4. Exit"
             << "\nPergerakan ( TOP ) : " << top
             << "\n\n>> Pilih : "; cin >> choose;
        switch (choose){
            case 1:
                push();getch();
                break;
            case 2:
                pop();getch();
                break;
            case 3:
                clearr();
                cout << "\nClear Succes" << endl;
                getch();
                break;
            case 4:
                cout << "Terima Kasih telah menggunakan program ini :)" << endl;
                getch();
                break;
            default:
                cout << "Pilihan tidak ada\nMasukan pilihan sesuai dengan daftar" << endl;
                getch();
                break;
        }
        system("cls");
    }while(choose !=4);
}


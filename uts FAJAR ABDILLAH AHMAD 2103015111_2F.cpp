#include <iostream>//library
#include <limits>//library

using namespace std;
 



/*
INI NOMOR SATU (1)
int inputInt()//pembuatan function
{
    int b = 0;//deklarasi var b
    while (!(cin >> b))//proses looping
    {
        cin.clear();//membersihkan program
        cin.ignore(numeric_limits<int>::max(), '\n');
        cout << "hasil bukan int silahkan coba lagi : ";
    }
    return b;//mengembalikan var b
}

// case 1
void bioMahasiswa()//pembuatan  function
{
    string nama, jurusan;//deklarasi var
    int nim;//deklarasi var
    
    // input nama
    cout << "masukan nama : ";
    cin.ignore();
    getline(cin, nama);//proses pemberian value sekaligus penginputan

    // input nim
    cout << "masukan NIM : ";
    nim = inputInt();//proses pemberian value sekaligus penginputan
    
    // input jurusan
    cout << "masukan jurusan : ";
    cin.ignore();//proses penginputan 
    getline(cin, jurusan);//proses penginputan 
	cout<<endl;
	cout<<endl;
    cout << "Hasil input :\n";
    cout << "Nama : " <<nama<<endl;//pemberian value
    cout << "NIM : " <<nim<<endl;//pemberian value
    cout << "Kelas : " <<jurusan<<endl;//pemberian value
}

typedef struct pegawai//struct
{
    string nama, prodi;//kumpulan tipe & variabel 
    int nidn;//kumpulan tipe & variabel
} infoDosen;
// case 2
void biodataDosen()//pembuatan function
{
    infoDosen dosen[5];//struct dan pemberian array
    cout << "Harap inputkan 5 data pegawai :\n";
    for (int k = 0; k < sizeof(dosen)/sizeof(dosen[0]); k++)
    {
        cout << k+1;
        // input nama
        cout << "masukan Nama Pegawai: ";
        cin.ignore();
        getline(cin, dosen[k].nama);//proses penginputan 

        // input prodi
        cout << "Masukan Jabatan Pegawai : ";
        getline(cin, dosen[k].prodi);//proses penginputan 

        // input nidn
        cout << "Masukan Usia Pegawai : ";
        dosen[k].nidn = inputInt();//pemberian value

        cout << endl;
    }

	cout<<endl;
	cout<<endl;
    cout << "Hasil input :\n";
    for (int k = 0; k < sizeof(dosen)/sizeof(dosen[0]); k++)
    {
        cout << "Nama Dosen: " <<dosen[k].nama<<endl;//pemberian value
        cout << "Prodi Dosen : " <<dosen[k].prodi<<endl;//pemberian value
        cout << "NIDN Dosen : " << dosen[k].nidn <<endl<<endl;//pemberian value
    }
}

// case 3
void infoBioskop()//pembuatan function
{
    typedef struct bskp//pembuatan struct
    {
        string movie, genre;//kumpulan tipe data
        int harga;//kumpulan tipe data
    } dataBioskop;//nama alias
    dataBioskop* bskp = new dataBioskop;//pemberian value
    string *ptmovie, *ptgenre, **ptptmovie, **ptptgenre;//pembuatan pointer dan ptpt
    int *ptharga, **ptptharga;//pembuatan pointer dan ptpt

    cout << "Silahkan input nama film \n";
    // input judul
    cout << "Masukan Nama Film : ";
    cin.ignore();
    getline(cin, bskp->movie);//proses penginputan

    // input penerbit
    cout << "Masukan Genre Film : ";
    getline(cin, bskp->genre);//proses penginputan 

    // input harga
    cout << "Masukan Harga Tiket: ";
    bskp->harga = inputInt();//variabel dinamis
    
    ptmovie = &bskp->movie;//pemberian value pada pt
    ptgenre = &bskp->genre;//pemberian value pada pt
    ptharga = &bskp->harga;//pemberian value pada pt

    ptptmovie = &ptmovie;//pemberian value pada pt
    ptptgenre = &ptgenre;//pemberian value pada pt
    ptptharga = &ptharga;//pemberian value pada pt

    cout << "\n\nHasil input :\n";

    cout << "Judul : "<<**ptptmovie<<endl;//pemberian value dengan ptpt
    cout << "Penebit : "<< **ptptgenre<<endl;//pemberian value dengan ptpt
    cout << "Harga : "<< **ptptharga<<endl;//pemberian value dengan ptpt

    delete(bskp);//penghapusan 
    
}


int main(){
    bool condition = true;//deklarasi var condition lalu di beri value
    int menu;//deklarasi var menu

    cout << "Pilih menu sesuai nomor dibawah ini :\n";
    cout << "1. Data Mahasiswa\n";
    cout << "2. Data Dosen\n";
    cout << "3. Info Bioskop\n";
    cout << "4. Keluar\n";
    while (condition)//looping dengan while
    {
        // memilih menu
        cout << "Pilih menu (1/2/3/4): ";
        menu = inputInt();//pemberian value var lalu di beri function

        switch (menu)//pembuatan  swicth
        {
        case 1:
        	cout<<"=================================================\n";
        	cout<<"=============== BIODATA MAHASISWA ================\n";
        	cout<<"====================================================\n";
            bioMahasiswa();//pemanggilan function
            break;
        case 2:
        	cout<<"=================================================\n";
        	cout<<"=============== BIODATA DOSEN ================\n";
        	cout<<"====================================================\n";
            biodataDosen();//pemanggilan function
            break;
        case 3:
        	cout<<"=================================================\n";
        	cout<<"=============== INFO BIOSKOP ================\n";
        	cout<<"====================================================\n";
            infoBioskop();//pemanggilan function
            break;//program berhenti
        default: // untuk menghentikan program
            condition = false;
            break;
        }
    }
    return 0;
}

*/


/*
INI NOMOR 2(PROGRAM ITERATIF
long fibo(int n){//function untuk penulisan rumus
	if(n==1 || n==2){//pengkondisian dengan if
		return 1;//mengembalikan nilai 1 jika suku pertama dan kedua
	}else{//selain instruksi if
		return (n-1)+(n-2);//mengmbalikan rumus fibinaci
	}
}

int main(){
	int angka;//deklarasi var
	cout<<"============ program rekursif Fibonaci ============="<<endl;
	cout<<"masukan nilai fibonaci = ";
	cin>>angka;//proses penginputan
	cout<<"nilai Fibonaci dari "<<angka<<" = "<<fibo(angka);//mencetak hasil nilai fibonaci
}

*/


/*
ini NOMOR 3
int hitungFactorial(int input) {//PEMBUATAN FUNCTION
  if(input > 1)//PENGKONDISIAN IF DENGAN PARAMETER INPUT>1
    return input * hitungFactorial(input - 1);
  else
    return 1;
}


int main(){//function main
	
    int x, y, gcd;//deklarasi var
	cout<<"======================== program tail rekursif ==============================\n";
	cout << " Masukkan angka 1 : ";
	cin >> x;//proses input
	cout << " Masukkan angka 2 : ";
	cin >> y;//proses input
	
	for (int j = 1; j <= x && j <= y; ++j) {//looping
		if (x % j == 0 && y % j == 0) {//pengkondisian
			gcd = j;
		}
	}
	cout << " GCD = " << gcd;//pencettakan gcd
	
	cout << " \n " << endl;
	
	cout << "========  Program C++ Hitung Faktorial ======" << endl;
  	cout << "===================================" << endl;
  	cout << endl;
 
  	cout << "Input angka: " << gcd << endl;//pencetakan gcd
 
  	cout << gcd << "! = " << hitungFactorial(gcd);//pemanggilan function hitungfactorial
  	cout << " Hasil GCD Setelah di Rekursif Adalah : " << hitungFactorial(gcd);
  	cout << endl;
    
    cin.get();//mendapatkan input user
    return 0;
}

*/



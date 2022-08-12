#include <iostream>
	using namespace std;
	
	void merge(int arr[], int l, int m, int r)//pembuatan function
	{
	    int i, j, k;//deklarasi 
	    int n1 = m - l + 1;//deklarasi sekaligus pemberian nilai
	    int n2 = r - m;//deklarasi sekaligus pemberian nilai
	
	    int L[n1], R[n2];//deklarasi var dengan array
	
	    for (i = 0; i < n1; i++)//perulangan dengan for
	        L[i] = arr[l + i];//pemberian nilai untuk var array
	    for (j = 0; j < n2; j++)//perulangan degnan foe
	        R[j] = arr[m + 1 + j];//pemberian nilai untuk var array
	
	    i = 0;//pemberian nilai
	    j = 0;//pemberian nilai
	    k = l;//pemberian nilai
	    while (i < n1 && j < n2)//perulangan dengan while
	    {
	        if (L[i] <= R[j])//pengkondisian dengan if
	        {
	            arr[k] = L[i];//pemberian nilai var arr index k
	            i++;//increment
	        }
	        else//kondisi lain
	        {
	            arr[k] = R[j];//pemberian nilai var arr index k
	            j++;//increment
	        }
	        k++;//increment
	    }
	
	    while (i < n1)//perulangan dengan while 
	    {
	        arr[k] = L[i];//pemberian nilai var arr index k
	        i++;//increment
	        k++;//increment
	    }
	
	    while (j < n2)//perulangan dengan while
	    {
	        arr[k] = R[j];//pemberian nilai var arr index k
	        j++;//increment
	        k++;//increment
	    }
	}
	
	void mergeSort(int arr[], int l, int r)//pembuatan function mergesort dengan parameter didalamnya
	{
	    if (l < r)//pengkondisian dengan if
	    {
	
	        int m = l + (r - l) / 2;//deklarasi var m lalu di lanjut pemberian nilai
	
	        mergeSort(arr, l, m);//pemanggilan function
	        mergeSort(arr, m + 1, r);//pemanggilan function
	
	        merge(arr, l, m, r);//pemanggilan function
	    }
	}
	
	void show(int A[], int size)//pembuatan fucntion show dengan parameter di dalamnya
	{
	    int i;//deklarasi integer untuk var i
	    for (i = 0; i < size; i++)//perulangan dengan for
	        cout << A[i] << " ";//pencetakan var a dengan index i
	}
	
	int main()//function utama
	{
	    int size;//deklaarasi variabel
	    cout << "\nMasukan Banyak Data : ";//pencetakan string
	
	    cin >> size;//penginputan ke dalam var size
	
	    int arr[size];//deklarasi var arr dengan index size
	
	    for (int i = 0; i < size; ++i)//perulangan dengan for
	    {
	        cout << "\nMasukan Data array ke "<<i<<" :";//pencrtakan string
	        cin >> arr[i];//penginputan arr dengan index i
	    }
	
	    mergeSort(arr, 0, size);//pemanggilan function
	
	    cout << "Hasil\n";//pencetakan string
	    show(arr, size);//pemanggilan function show
	    return 0;//proses pengembalian nilai
	}

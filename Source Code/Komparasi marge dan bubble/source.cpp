#include "header.h"

void createRandomArray(int arrTampung[], int banyaknya){
    for (int i=0; i<banyaknya;i++){
        arrTampung[i] = rand()%1000+1;
    }
}

void cetakArray(int arrTampung[], int banyaknya){
    cout << "\n\nArray / Beban Yang di Masukan adalah : " << endl;
    for (int i=0; i<banyaknya; i++){
        cout << arrTampung[i] << endl;
    }
}

void bubbleSort(int arrTampung[], int banyaknya){
    for (int i = banyaknya-1; i>=0; i--){
        for (int j=1; j<=i;j++){
            if (arrTampung[j-1] > arrTampung[j]){
                int temp = arrTampung[j-1];
                arrTampung[j-1] = arrTampung[j];
                arrTampung[j] = temp;
            }
        }
    }
}

void Merge(int *a, int low, int high, int mid)
{
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;

	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}

	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}

	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}



	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
}


void mergeSort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		mergeSort(a, low, mid);
		mergeSort(a, mid+1, high);
		Merge(a, low, high, mid);
	}
}

void menuAwal(){
    cout << "[OLEH : MISWAN, DUTA ARIEF S, DENI WARSA S, MAKMUM ]" << endl;
    cout << "=============S2 TI UNPAM==============" << endl;
    cout << "KOMPARASI BUBBLE SORT DAN  MERGE SORT" << endl;
    cout << "Masukan Input Beban/Array   :  ";
}

void menuUtama(){
    cout << "KOMPLEKSITAS BUBBLE SORT AND MERGE SORT" << endl;
    cout << "Pilihan Menu yang tersedia : " << endl;
    cout << "1. Tampilkan Array/Beban" << endl;
    cout << "2. Bubble Sort" << endl;
    cout << "3. Merge Sort" << endl;
    cout << "4. Reset isi Array" << endl;
    cout << "9. Keluar dari program" << endl;
    cout << "Pilihan Anda : ";
}

void menuPilihan(int pilihan, int arrTampung[],int banyaknya){
    switch (pilihan){
        case 1:
            cetakArray(arrTampung,banyaknya);
            break;
        case 2:{
            auto t1 = chrono::high_resolution_clock::now();
            bubbleSort(arrTampung,banyaknya);
            auto t2 = chrono::high_resolution_clock::now();
            auto duration = chrono::duration_cast<chrono::milliseconds>(t2-t1).count();
            cout << "\n\nWaktu eksekusi adalah : " << duration << " mili (10^-3) detik" << endl;
            }break;
        case 3:{
            auto t3 = chrono::high_resolution_clock::now();
            mergeSort(arrTampung,0,banyaknya-1);
            auto t4 = chrono::high_resolution_clock::now();
            auto duration2 = chrono::duration_cast<chrono::milliseconds>(t4-t3).count();
            cout << "\n\nWaktu eksekusi adalah : " << duration2 << " mili (10^-3) detik" << endl;
            }break;
        case 4:
            createRandomArray(arrTampung,banyaknya);
            break;
        case 9:
            break;
        default:
            cout << "Masukkan angka yang valid" << endl;
            break;
    }
}

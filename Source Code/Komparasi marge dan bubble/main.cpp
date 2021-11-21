#include "header.h"

int main()
{
    int banyaknya;
    menuAwal();
    cin >> banyaknya;
    int arrTampung[banyaknya];
    createRandomArray(arrTampung,banyaknya);
    system("PAUSE");
    system("CLS");

    int pilihan;
    do{
        menuUtama();
        cin >> pilihan;
        menuPilihan(pilihan,arrTampung,banyaknya);
        system("PAUSE");
        system("CLS");
    }while (pilihan!=9);

    system("PAUSE");
    return 0;
}

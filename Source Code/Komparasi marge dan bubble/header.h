#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <chrono>

using namespace std;

void createRandomArray(int arrTampung[], int banyaknya);
void cetakArray(int arrTampung[], int banyaknya);
void bubbleSort(int arrTampung[], int banyaknya);
void Merge(int *a, int low, int high, int mid);
void mergeSort(int *a, int low, int high);

void menuAwal();
void menuUtama();
void menuPilihan(int pilihan, int arrTampung[],int banyaknya);

#endif // HEADER_H_INCLUDED

//utils.c contiene le funzioni generiche per determinate utilità

#include "utils.h"

//Tipo boolean per condizioni False o True
typedef int bool;
#define true 1
#define false 0

//Scambia due valori
void swap(int *a, int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
}

//Cerca la posizione del valore minimo in un array
int min(int *a, int n){
  int min=0;
  for(int i=1; i<n; i++){
    if(a[i]<a[min]){
      min=i;
    }
  }
  return min;
}

void bubbleSort(int a[], int elementi){
  for(int i=0; i<elementi; i++){
    for(int j=0; j<(elementi-i); j++){
      if(a[j]>a[j+1]){
        swap(&a[j], &a[j+1]);
      }
    }
  }
}

void shiftsx(int a[], int *ultimo, int i){
  for(; i<*ultimo; i++){
    int[i]=int[i+1];
  }
  (*ultimo)--
}

void shiftdx(int a[], int *ultimo, int i){
  for(int j=*ultimo; j>i; j--){
    a[j]=a[j-1];
  }
  (*ultimo)++;
}

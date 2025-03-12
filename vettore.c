//vettore.c contiene le funzioni specifiche alle operazioni sui vettori

#include <stdio.h>
#include "vettore.h"
#include "utils.h"

//Tipi boolean per condizioni False o True
#define true 1
#define false 0

//Inizializza l'array iterativamente
int inizializzaArray(int a[], int taglia, int *ultimo){
  for(int i=0; i<taglia; i++){
    printf("Inserire l'elemento in posizione %d: ", i);
    scanf("%d", &a[i]);
  }
  printf("\nArray inizializzato!\n\n");
  *ultimo=taglia-1;
  return true;
}

//Stampa tutti i valori con la loro posizione iterativamente
void stampaArray(int a[], int taglia){
  for(int i=0; i<=taglia; i++){
    printf("\nElemento %d dell'array: %d", i, a[i]);
  }
}

//Cerca un elemento nell'array e ne stampa la posizione
void cercaArray(int a[], int taglia){
  int n;
  printf("Inserire il valore da cercare: ");
  scanf("%d", &n);
  int inizio=0, fine=taglia, centro;
  while(inizio<=fine){
    centro=(inizio+fine)/2;
    if(n==a[centro]){
      break;
    }else if(n>a[centro]){
      inizio=centro+1;
    }else if(n<a[centro]){
      fine=centro-1;
    }
  }
  if(a[centro]==n){
    printf("Il valore %d si trova nell'array ed è nella posizione %d", a[centro], centro);
  }else{
    printf("Valore non trovato nell'array!\n");
  }
}

//Cerca il minimo lungo tutto l'array
void minimoArray(int a[], int taglia){
  int minimo=min(a, taglia);
  printf("Il valore minimo nell'array è %d nella posizione %d", a[minimo], minimo);
}

//Ordinamento degli elementi dell'array tramite Selection Sort
void ordinaArray(int a[], int ultimo){
  bubbleSort(a, ultimo);
  printf("L'array è stato ordinato");
}

void eliminaArray(int a[], int *ultimo){
  int i;
  while(true){
    printf("Inserire la posizione (da 0 a %d) dell'elemento da eliminare: ", *ultimo);
    scanf("%d", &i);
    if(i<0 || i>*ultimo){
      printf("L'indice inserito non è un elemento valido!\n");
    }else{
      break;
    }
  }
  shiftsx(a, ultimo, i);
}

void inserisciArray(int a[], int taglia, int *ultimo){
  int i, valore;
  while(true){
    printf("Inserire la posizione (da 0 a %d) dell'elemento da inserire: ", *ultimo);
    scanf("%d", &i);
    if(i<0 || i>=*ultimo){
      printf("L'indice inserito non è un elemento valido!");
    }else{
      break;
    }
  }
shiftdx(a, ultimo, i);
printf("Inserire il valore da inserire: ");
scanf("%d", &valore);
a[i]=valore;
}

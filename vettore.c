//vettore.c contiene le funzioni specifiche alle operazioni sui vettori

#include "vettore.h"
#include "utils.h"

//Inizializza l'array iterativamente
void inizializzaArray(int a[], int taglia, int *ultimo){
  for(int i=0; i<taglia; i++){
    printf("Inserire l'elemento in posizione %d: ", i);
    scanf("%d", &a[i]);
  }
  printf("\nArray inizializzato!\n");
  *ultimo=taglia-1;
  return true;
}

//Stampa tutti i valori con la loro posizione iterativamente
void stampaArray(int a[], int taglia){
  for(int i=0; i<taglia; i++){
    printf("\nElemento %d dell'array: %d", i, a[i]);
  }
}

//Cerca un elemento nell'array e ne stampa la posizione
void cercaArray(int a[], int taglia, int n){
  int inizio=0, fine=n-1, centro;
  while(inizio<=fine){
    centro=(inizio-fine)/2;
    if(e==a[centro]){
      return centro;
    }else if(e>a[centro]){
      inizio=centro+1;
    }else if(e<a[centro]){
      fine=centro-1;
    }else{
      printf("Valore non trovato nell'array!");
    }
  printf("Il valore minimo nell'array è %d nella posizione %d", a[centro], centro);
  }
}

//Cerca il minimo lungo tutto l'array
void minimoArray(int a[], int taglia){
  int minimo=min(a, taglia);
  printf("Il valore minimo nell'array è %d nella posizione %d", a[min], min);
}

//Ordinamento degli elementi dell'array tramite Selection Sort
void ordinaArray(int a[], int *ultimo){
  bubbleSort(a, *ultimo);
  printf("L'array è stato ordinato");
}

void eliminaArray(int a[], int *ultimo){
  if(*ultimo<0){
    printf("L'array è vuoto, impossibile eliminare elementi!");
  }else{
    while(true){
      printf("Inserire la posizione (da 0 a %d) dell'elemento da eliminare: ", *ultimo);
      int i;
      scanf("%d", &i);
      if(i<0 || i>=*ultimo){
        printf("L'indice inserito non è un elemento valido!");
      }else{
        break;
      }
    }
    shiftsx(a, ultimo, i);
  }
}

void inserisciArray(int a[], int taglia, int *ultimo){
  if(*ultimo>=taglia){
    printf("L'array è pieno, impossibile inserire elementi!");
  }else{
    while(true){
      printf("Inserire la posizione (da 0 a %d) dell'elemento da inserire: ", *ultimo);
      int i;
      scanf("%d", &i);
      if(i<0 || i>=*ultimo){
        printf("L'indice inserito non è un elemento valido!");
      }else{
        break;
      }
    }
  shiftdx(a, ultimo, i);
  printf("Inserire il valore da inserire: ");
  scanf("%d", &valore)
  a[i]=valore;
}

//vettore.c contiene le funzioni specifiche alle operazioni sui vettori

#include "vettore.h"
#include "utils.h"

void inizializzaArray(int a[], int taglia){
  for(int i=0; i<taglia; i++){
    printf("Inserire l'elemento in posizione %d: ", i);
    scanf("%d", &a[i]);
  }
  printf("\nArray inizializzato!\n");
  return 1; //cambiare col tipo boolean
}

//Stampa tutti i valori con la loro posizione iterativamente
void stampaArray(int a[], int taglia){
  for(int i=0; i<taglia; i++){
    printf("\nElemento %d dell'array: %d", i, a[i]);
  }
}

void cercaArray(int a[], int taglia, int n){
  int occorrenze=0, *pos;
  pos = (* int)malloc(1*sizeof(int));
  for(int i=0, i<taglia, i++){
    if(a[i]==n){
      occorrenze++;
      //inserire la realloc e tutto il resto del cerca array
    }
  }
  if(occorrenze==0){
    printf("Il velore inserito non è presente nell'array!");
  }else{
    printf("Il valore inserito è stato trovato %d volte nell'array.", occorrenze); //inserire la stampa delle posizioni
  }
}

//Cerca il minimo iteramente lungo tutto l'array, segnando inizialmente come minimo l'elemento in posizione 0, stampando valore e posizione
void minimoArray(int a[], int taglia){
  int minimo=a[0], pos;
  for(int i=1; i<taglia; i++){
    if(a[i]<minimo){
      minimo=a[i];
      pos=i;
    }
  }
  printf("Il valore minimo nell'array è %d nella posizione %d.", minimo, pos);
}

void ordinaArray(int a[], int taglia){

}

void eliminaArray(int a[], int taglia){

}

void inserisciArray(int a[], int taglia){

}

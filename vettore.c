#include "vettore.h"
#include "utils.h"

void inizializzaArray(int a[], int taglia){
  for(int i=0; i<taglia; i++){
    printf("Inserire l'elemento in posizione %d: ", i);
    scanf("%d", &a[i]);
  }
  printf("Array inizializzato!");
}

void stampaArray(int a[], int taglia){
  for(int i=0; i<taglia; i++){
    printf("Elemento %d dell'array: %d", i, a[i]);
  }
}

void cercaArray(int a[], int taglia, int n){
  int occorrenze=0;
  for(int i=0, i<taglia, i++){
    if(a[i]==n){
      occorrenze++;
    }
  }
  if(occorrenze==0){
    printf("Il velore inserito non è presente nell'array!");
  }else{
    printf("Il valore inserito è stato trovato %d volte nell'array.", occorrenze);
  }
}

void minimoArray(int a[], int taglia){
  int minimo=a[0];
  for(int i=1; i<taglia; i++){
    if(a[i]<minimo){
      minimo=a[i];
    }
  }
  printf("Il valore minimo nell'array è %d", minimo);
}

void ordinaArray(int a[], int taglia){

}

void eliminaArray(int a[], int taglia){

}

void inserisciArray(int a[], int taglia){
  
}

#include "vettore.h"
#include <stdio.h>

//realizzare il define boolean e metterlo al posto di int nell'init

int main(){
  int s, taglia, init;
  printf("Inserire la taglia dell'array: ");
  scanf("%d", &taglia);
  int array[taglia];
  init = 0;
  while(1){
    printf("--- Operazioni su vettori ---\n1. Immissione elementi in un dato array\n2. Stampare il contenuto di un dato array\n3. Ricerca di un elemento in un dato array\n4. Ricercare il minimo in un dato array\n5. Ordinare un dato array\n6. Eliminare un elemento in un dato array\n7. Inserimento di un elemento in un dato array\n8. Esci");
    scanf("%d", &s);
    if(init == 0){
      printf("    *** ARRAY NON INIZIALIZZATO ***\nInizializzare l'array prima di operare!");
      if(s != 1){
        s=9;
      }
    }
    switch(s){
      case 1:
        init = inizializzaArray(array, taglia);
        break:
      case 2:
        stampaArray(array, taglia);
        break:
      case 3:
        break:
      case 4:
        minimoArray(array, taglia);
        break:
      case 5:
        break:
      case 6:
        break:
      case 7:
        break:
      case 8:
        break:
      default:
        printf("Il valore inserito non è valido o l'array non è inizializzato!");
    }
  }
  return 0;
}

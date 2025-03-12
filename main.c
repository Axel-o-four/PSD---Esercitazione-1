#include "vettore.h"
#include <stdio.h>

int main(){
  int s, taglia, init;
  //La variabile init serve per non permettere altre operazioni al di fuori dell'inizializzazione se l'array non è ancora inizializzato
  printf("Inserire la taglia dell'array: ");
  scanf("%d", &taglia);
  int array[taglia];
  int last;
  //La variabile last serve per tener conto dell'ultimo elemento dell'array riempito per evitare operazioni di inserimento con array pieno
  //o di cancellazione con array vuoto e facilitare le operazioni di shift
  init = false;
  //ciclo while da cui si esce solo con
  while(true){
    printf("--- Operazioni su vettori ---\n1. Immissione elementi in un dato array\n2. Stampare il contenuto di un dato array\n3. Ricerca di un elemento in un dato array\n4. Ricercare il minimo in un dato array\n5. Ordinare un dato array\n6. Eliminare un elemento in un dato array\n7. Inserimento di un elemento in un dato array\n8. Esci");
    scanf("%d", &s);
    if(init == false){
      printf("    *** ARRAY NON INIZIALIZZATO ***\nInizializzare l'array prima di operare!");
      if(s != 1){
        s=9;
      }
    }
    switch(s){
      case 1:
        init=inizializzaArray(array, taglia, &last);
        full=init;
        break;
      case 2:
        stampaArray(array, taglia);
        break;
      case 3:
        cercaArray(array, taglia);
        break;
      case 4:
        minimoArray(array, taglia);
        break;
      case 5:
        ordinaArray(array, taglia);
        break;
      case 6:
        break;
      case 7:
        break;
      case 8:
        return 0;
      default:
        printf("Il valore inserito non è valido o l'array non è inizializzato!");
    }
  }
}

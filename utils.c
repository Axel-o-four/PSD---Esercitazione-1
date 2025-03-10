//utils.c contiene le funzioni generiche per determinate utilità

#include "utils.h"

void swap(int *a, int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
}

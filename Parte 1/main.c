#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mergesort.h"

int main(){
  srand(time(NULL));
  int n;
  printf("\nInserire la grandezza dell'array: ");
  scanf("%d", &n);
  int arr[n];
  for(int i=0; i<n; i++){
    arr[i]=rand()%100;
  }
  printf("\nArray non ordinato: ");
  for(int i=0; i<n; i++){
    printf("%d ", arr[i]);
  }
  printf("\nPassaggi per ordinare l'array: ");
  mergeSortSoloStampe(n);
  printf("\nATTENZIONE: array non ancora ordinato!");
  mergeSortIterativo(arr, n);
  printf("\nArray ordinato: ");
  for(int i=0; i<n; i++){
    printf("%d ", arr[i]);
  }
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "mergesort.h"

#define 10 N

int main(){
  srand(time(NULL));
  int arr[N];
  for(int i=0; i<N; i++){
    arr[i]=rand()%100;
  }
  printf("\nArray non ordinato: ")
  for(int i=0; i<N; i++){
    printf("%d ", arr[i])
  }

  mergeSortIterativo(arr[i], N);
  printf("\nArray ordinato: ")
  for(int i=0; i<N; i++){
    printf("%d ", arr[i])
  }
  return 0;
}

#include "mergesort.h"
#include <stdio.h>

void merge(int a[], int b[], int n1, int n2, int c[]){
	int i, j, k, temp[n1 + n2];
	for(i = 0, j = 0, k = 0; i < n1 && j < n2; k++){
		if(a[i] <= b[j])
			temp[k] = a[i++];
		else
			temp[k] = b[j++];
	}
	for(;i < n1; i++, k++){
		temp[k] = a[i];
  }
	for(;j < n2; j++, k++){
		temp[k] = b[j];
  }
	for(k = 0; k < n1 + n2; k++){
		c[k] = temp[k];
  }
}

int min(int a, int b){
  if(a<b){
    return a;
  }else{
    return b;
  }
}

void mergeSortSoloStampe(int n){
  int curr_size, left_start, left_end, right_end;
  for(curr_size=1; curr_size<n; curr_size*=2){
    printf("\ndim %d", curr_size);
    for(left_start=0; left_start<n; left_start+=2*curr_size){
      left_end=min((left_start+curr_size-1), n-1);
      right_end=min((left_start+2*curr_size-1), n-1);
      if(!(left_end>=right_end)){
        printf("\n merge di %d-%d e %d-%d", left_start, left_end, left_end+1, right_end);
      }
    }
  }
}

void mergeSortIterativo(int a[], int n){
  int curr_size, left_start, left_end, right_end, temp[n];
  for(curr_size=1; curr_size<n; curr_size*=2){
    for(left_start=0; left_start<n; left_start+=2*curr_size){
      left_end=min((left_start+curr_size-1), n-1);
      right_end=min((left_start+2*curr_size-1), n-1);
      int n1=left_end-left_start+1;
      int n2=right_end-left_end;
      merge(&a[left_start], &a[left_end+1], n1, n2, &temp[left_start]);
      for(int i=left_start; i<=right_end; i++){
        a[i]=temp[i];
      }
    }
  }
}

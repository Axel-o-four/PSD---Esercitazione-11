#include <stdio.h>
#include "queue.h"
#include "item.h"

int main(){
  Queue q=newQueue();
  int s;
  while(1){
    printf("\n\n1.Controlla se la queue è vuota.\n2.Aggiungi un elemento alla queue.\n3.Rimuovi un elemento dalla queue.\n4.Stampa la queue.\nAltro valore.Esci.\nSeleziona l'operazione da effettuare: ");
    scanf("%d", &s);
    if(s==1){
      if(isEmptyQueue(q)){
        printf("\nLa coda è vuota.");
      }else{
        printf("\nLa coda non è vuota.");
      }
    }else if(s==2){
      printf("\nInserire il valore da accodare: ");
      Item e=inputItem();
      enqueue(q, e);
    }else if(s==3){
      printf("\nIl valore rimosso è ");
      Item e=dequeue(q);
      outputItem(e);
    }else if(s==4){
      printf("\nLa coda è ");
      printQueue(q);
    }else{
      return 0;
    }
  }
}

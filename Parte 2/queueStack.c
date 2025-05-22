#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "stack.h"
#include "item.h"

struct queue{
  Stack data;
  Stack support;
};

Queue newQueue(){
  struct queue *q;
  q=(struct queue *)malloc(1*sizeof(struct queue));
  Stack d=newStack(), s=newStack();
  if(d==NULL||s==NULL){
    return NULL;
  }
  q->data=d;
  q->support=s;
  return q;
}

int isEmptyQueue(Queue q){
  return(isEmptyStack(q->data));
}

void enqueue(Queue q, Item e){
  push(q->data, e);
}

Item dequeue(Queue q){
  while(!isEmptyQueue(q)){
    push(q->support, top(q->data));
    pop(q->data);
  }
  Item e=top(q->support);
  pop(q->support);
  while(!isEmptyStack(q->support)){
    push(q->data, top(q->support));
    pop(q->support);
  }
  return e;
}

void printQueue(Queue q){
  if(isEmptyQueue(q)){
    printf("vuota.");
  }else{
    while(!isEmptyQueue(q)){
      push(q->support, top(q->data));
      pop(q->data);
    }
    Item e;
    while(!isEmptyStack(q->support)){
      e=top(q->support);
      pop(q->support);
      outputItem(e);
      push(q->data, e);
    }
  }
}

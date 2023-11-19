#include<iostream>
using namespace std;

class Queue{
  public:
    int front,rear,size;
    unsigned cap;
    int*arr;
};

Queue* createQueue(unsigned cap){
  Queue* queue=new Queue(); queue->cap = cap;
  queue->front = queue->size = 0;

  queue->rear = cap -1;
  queue->arr = new int[(queue->cap * sizeof(int
        ))];
  return queue;
}

int isFull(Queue*queue){
  return (queue->size == queue->cap);
}
int isEmpty(Queue *queue){
 return (queue->size == 0); 
}
void queEnqueue(Queue *queue,int item){
 if(isFull(queue) ){
    return;
  }
 queue->rear=(queue->rear + 1)% queue->cap;
}

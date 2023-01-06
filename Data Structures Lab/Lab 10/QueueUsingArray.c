// Name: Hitendra Sisodia
// Sap id: 500091910
// Queue Using arrays's
#include<stdio.h>
#include<stdlib.h>
# define MAXSIZE 10
struct fifo
{
    int arr[MAXSIZE];
    int front;
    int rear;
};
typedef struct fifo Queue;
Queue *createQueue(Queue *q)
{
    q -> front = -1;
    q -> rear = -1;
}
int isFullQueue(Queue *q)
{
    if(q -> rear == (MAXSIZE - 1)){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmptyQueue(Queue *q)
{
    if(q -> front == -1){
        return 1;
    }
    else{
        return 0;
    }
}
Queue *ENQUEUE(Queue *q ,int key)
{
    if(isFullQueue(q)){
        printf("Queue Overflow\n");
    }
    else if(q -> front == -1 && q -> rear == -1){
        q -> front = q -> rear = 0;
        q -> arr[q -> rear] = key;
    }
    else{
        q -> rear++;
        q -> arr[q -> rear] = key;
    }
}
int DEQUEUE(Queue *q)
{
    if(isEmptyQueue(q)){
        printf("Queue Underflow");
    }
    else{
        q -> front++;
    }
}
void displayQueue(Queue *q)
{
    for(int i = 0 ; i < q -> rear ; i++){
        printf("%d ",q -> arr[i]);
    }
    printf("\n");
}
int countQueue(Queue *q)
{
   // count the number of elments in queue
    int count = 0;
    for(int i = 0 ; i < q -> rear ; i++){
        count++;
    }
    printf("Number of elements in queue is:%d",count);
}
int main()
{
    struct fifo q;
    createQueue(&q);
    ENQUEUE(&q,24);
    ENQUEUE(&q,25);
    ENQUEUE(&q,26);
    ENQUEUE(&q,27);
    displayQueue(&q);
    ENQUEUE(&q,28);
    displayQueue(&q);
    ENQUEUE(&q,29);
    DEQUEUE(&q);
    displayQueue(&q);
    countQueue(&q);
}




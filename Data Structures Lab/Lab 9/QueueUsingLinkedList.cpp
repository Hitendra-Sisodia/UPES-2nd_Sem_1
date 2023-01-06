// Name: Hitendra Sisodia
// Sap id: 500091910
// Queue implementation using linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};

void enqueue(struct node** front,struct node** rear,int x)
{   
    struct node *temp = *rear;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode -> data = x;
    newnode -> link = NULL;
    if(*front == NULL && *rear == NULL){
        *front = *rear = newnode;
    }
    else{
        temp -> link = newnode;
        *rear = newnode;
    }
}
void dequeue(struct node **front, struct node **rear)
{   
    struct node *temp = *front;
    if(*front == NULL && *rear == NULL){
        printf("Queue is empty\n");
    }
    else{
        *front = temp -> link;
        free(temp);
    }
}
void display(struct node *front){
    struct node *temp = front;
    while(temp != NULL){
        printf("%d ",temp -> data);
        temp = temp -> link;
    }
    printf("\n");
}
void peek(struct node *front, struct node *rear)
{   
    if(front == NULL && rear == NULL){
        printf("Queue is empty no peek value exist\n");
    } 
    else{
        printf("Peek:%d\n",front -> data);
    }
}
void isfull(struct node *front, struct node *rear)
{
    printf("Queue never can  be full\n");
}
void isempty(struct node *front,struct node *rear)
{   
    if(front == NULL && rear == NULL){
        printf("Queue is empty\n");
    }
    else{
        printf("Queue is not empty\n");
    }
}
int main()
{   
    struct node *front = NULL;
    struct node *rear = NULL;
    enqueue(&front,&rear,24);
    display(front);
    enqueue(&front,&rear,25);
    display(front);
    enqueue(&front,&rear,26);
    display(front);
    enqueue(&front,&rear,27);
    display(front);
    enqueue(&front,&rear,28);
    display(front);
    dequeue(&front,&rear);
    display(front);
    dequeue(&front,&rear);
    display(front);
    peek(front,rear);
    isfull(front,rear);
    isempty(front,rear);
}








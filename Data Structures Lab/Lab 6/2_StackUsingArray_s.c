#include <stdio.h>
#include <stdlib.h>
#define size 100
struct stack
{
    int st[size];
    int top;
};
typedef struct stack Stack;
int isFull(Stack *s)
{
    if (s->top == size - 1){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(Stack *s)
{
    if (s->top = -1){
        return 1;
    }
    else{
        return 0;
    }
}
void create(Stack *s)
{
    s->top = -1;
}
void push(Stack *s, int value)
{
    if (s->top == (size - 1)){
        printf("\nStack is overflowed");
        exit(-1);
    }
    else{
        s->top++;
        s->st[s->top] = value;
    }
}
int pop(Stack *s)
{
    if (s->top == -1){
        printf("\nStack is empty");
    }
    else{
        return s->st[s->top--];
    }
}
void main()
{
    Stack A, B;
    create(&A);
    create(&B);
    push(&A, 27);
    push(&A, 73);
    push(&A, 53);
    push(&B, 85);
    push(&B, 27);
    printf("%d ", pop(&A));
    push(&A, pop(&B));
    if(isEmpty(&B)){
        printf("\nB is empty");
    }
    else{
        printf("\nB is not empty");
    }
    if(isFull(&A)){
        printf("\nA is full");
    }
    else{
        printf("\nA is not full");
    }
}











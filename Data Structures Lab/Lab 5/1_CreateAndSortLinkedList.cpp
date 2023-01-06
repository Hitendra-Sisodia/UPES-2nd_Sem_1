#include<bits/stdc++.h>
struct node
{
    int data;
    struct node *link;
};
void display(struct node *head)       // display function 
{
    struct node *temp = head;
    while(temp != NULL){
        printf("%d ",temp -> data);
        temp = temp -> link;
    }
    printf("\n");
}
struct node *createnode()                         //node creation
{
    struct node *newnode = (node *)malloc(sizeof(node));
    scanf("%d", &newnode -> data);
    newnode -> link = NULL;
    return newnode;
}
void insertbeg(struct node **head, node *newnode)        //insert at head
{   
    newnode -> link = *head;
    *head = newnode;
}
void insertend(struct node **head,node *newnode)        //insert at end
{   
    struct node *temp = *head;
    while(temp -> link != NULL){
        temp = temp -> link;
    }        
    temp -> link = newnode;
}
void insertmid(struct node **head,node *newnode,int key)    //insert in mid
{   
    struct node *temp = *head;
    while(temp -> link -> data != key){
        temp = temp -> link;
    }      
    newnode -> link = temp -> link;
    temp -> link = newnode;
}
int main()
{
    int N;
    scanf("%d",&N);
    struct node *head = NULL;
    while(N--){
        struct node *newnode = createnode();
        if(head == NULL || newnode -> data < head -> data){
            insertbeg(&head,newnode);
        }
        else{
            struct node *temp = head;
            while(temp != NULL){
                if(temp -> data > newnode -> data){
                    int key = temp -> data;
                    insertmid(&head, newnode, key);
                    break;
                }
                temp = temp -> link;
            }
            if(temp == NULL){
                insertend(&head,newnode);
            }
        }
        display(head);
    }
    return 0;
}









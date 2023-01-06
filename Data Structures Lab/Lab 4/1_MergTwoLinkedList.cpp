#include<bits/stdc++.h>
struct node                    //struct defination
{
    int data;
    node *link;
};
node *concatenate(node* head1,node* head2)  //concntenate function
{
    node *temp1=head1;
    while(temp1 -> link != NULL){    //loop for tail of first linked list
        temp1 = temp1 -> link;
    }
    temp1 -> link = head2;      //assigned tail -> link with head2
    node *temp =head1;
    while(temp != NULL){                 //loop for printing
        printf("%d ",temp -> data);
        temp = temp -> link;
    }
}
int main()
{
    node *head1,*newnode1,*temp1;
    head1=0;
    int choice1;
    scanf("%d",&choice1);
    while(choice1>0){                //input of first linked list
        newnode1 = (node*)malloc(sizeof(node));
        int x1;
        scanf("%d",&x1);
        newnode1 ->data= x1;
        newnode1 ->link= NULL;
        if(head1==0){           //condition for checking Null linked list
            head1=temp1=newnode1;
        }
        else{
            temp1->link=newnode1;
            temp1=newnode1;
        }
        choice1--;
    }
    temp1=head1;
    node *head2,*newnode2,*temp2;
    head2=0;
    int choice2;
    scanf("%d",&choice2);
    while(choice2>0){
        newnode2 = (node*)malloc(sizeof(node)); //input of first linked list
        int x;
        scanf("%d",&x);
        newnode2 ->data= x;
        newnode2 ->link= NULL;
        if(head2==0){            //condition for checking Null linked list
            head2=temp2=newnode2;
        }
        else{
            temp2->link=newnode2;
            temp2=newnode2;
        }
        choice2--;
    }
    concatenate(head1,head2);
    return 0;
}



















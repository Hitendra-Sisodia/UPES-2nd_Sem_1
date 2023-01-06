#include<bits/stdc++.h>
struct node          //struct declaration
{
    int coeff;
    int pow;               //struct defination
    struct node *link;
};
void create(struct node *&head,int c,int p) //link list creation function
{
    struct node *temp = head;
    if(head == NULL){                   //insertion at head in linked list
        struct node *newnode = (node*)malloc(sizeof(node));           
        newnode -> coeff = c;
        newnode -> pow = p;
        newnode -> link = NULL;
        head = newnode;
    }
    else{
        while(temp -> link != NULL){                             
            temp = temp -> link;
        }
        struct node *newnode = (node*)malloc(sizeof(node)); // insertion at end 
        newnode -> coeff = c;
        newnode -> pow = p;
        newnode -> link = NULL;
        temp -> link = newnode;
    }
}
// function of addtion of polynomial
void add(struct node *head1,struct node *head2,struct node  *resulthead)              
{
    while(head1 -> link && head2 -> link){              // traversing head1 and head2 if link part exist
        if((head1 -> pow) > (head2 -> pow)){                  // head1 pow > head2 pow 
            resulthead -> coeff = head1 -> coeff;              // then resulthead store head1 pow and coeff
            resulthead -> pow = head1 -> pow;
            head1 = head1 -> link;
        }
        else if((head2 -> pow) > (head1 -> pow)){              //head2 pow > head1 pow
            resulthead -> coeff = head2 -> coeff;              // then resulthead will store head2 pow and coeff
            resulthead -> pow = head2 -> pow;
            head2 = head2 -> link;
        }
        else if(head1 -> pow == head2 -> pow){                          //if both head1 pow and head2 pow are
            resulthead -> pow = head2 -> pow;                              // same then it stored into
            resulthead -> coeff = (head1 -> coeff) + (head2 -> coeff); // addition of same pow head1 and head2
            head1 = head1 -> link;                                                //coefficients
            head2 = head2 -> link; 
        }
        resulthead -> link = (struct node*)malloc(sizeof(node));             //creation of new resulthead
        resulthead = resulthead -> link;
        resulthead -> link = NULL;
    }
    while(head1 -> link || head2 -> link){                            // link section may or may not exist
        if(head1 -> link){                                // if head1 link may exist then
            resulthead -> pow = head1 -> pow;              //head1 coeff and pow directly copyed to  resulthead
            resulthead -> coeff = head1 -> coeff;
            head1 = head1 -> link;
        }
        if(head2 -> link){                                 // if head2 link may exist then
            resulthead -> pow = head2 -> pow;              //head1 coeff and pow directly copyed to  resulthead
            resulthead -> coeff = head2 -> coeff;
            head2 = head2 -> link;
        }
        resulthead -> link = (struct node *)malloc(sizeof(node));
        resulthead = resulthead -> link;
        resulthead -> link = NULL;
    }
    if(head1-> link == NULL && head2 -> link == NULL){                 // if head1 link and head2 link both
        resulthead-> pow = head1 -> pow;                                   // both equal to NULL section
        resulthead -> coeff = (head1 -> coeff) + (head2 -> coeff);
        resulthead -> link = NULL;
    }
}
void printpoly(struct node* head)                             // function for printing resultant poly
{
    struct node *temp = head;
    while(temp != NULL){
        printf("%dx^%d",temp -> coeff, temp -> pow);
        temp = temp -> link;
        if(temp != NULL){
            printf(" + ");
        }
    }
    printf("\n");
}
int main()
{
    struct node *head1 = NULL;                                   //creation of empty head1 and head2 pointers.
    struct node *head2 = NULL; 
    struct node *resulthead = NULL;
    int N;
    printf("Enter no of nodes in 1st linked list1:");                  // number of nodes in 1st link list
    scanf("%d",&N);
    while(N--){
        int coeff,pow;
        printf("coeff:");
        scanf("%d",&coeff);
        printf("pow:");
        scanf("%d",&pow);
        create(head1 ,coeff,pow);
    }
    int M;
    printf("Enter no of nodes in 2nd linked list1:");                   // number of nodes in 2nd link list
    scanf("%d",&M);
    while(M--){
        int coeff,pow;
        printf("coeff:");
        scanf("%d",&coeff);
        printf("pow:");
        scanf("%d",&pow);
        create(head2 ,coeff,pow);
    }
    resulthead = (node *)malloc(sizeof(node));
    add(head1,head2,resulthead);                        //calling of poly addition function
    printpoly(head1);
    printpoly(head2);
    printpoly(resulthead);                              //calling printing function for resultant linked list
    return 0;
}





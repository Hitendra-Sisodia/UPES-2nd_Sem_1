#include<bits/stdc++.h>
struct node                                   //struct name
{
	int data;								//Struct defination
	node *link;
};
void insert(node* &head,int X)
{	
	struct node *temp;
	struct node *newnode = (node*)malloc(sizeof(node));
	if(head == NULL ||  (head -> data) > X){  //Insertion of newnode at head
		newnode -> link = head;
		newnode -> data = X;
		head = newnode;
	} 
	else{
		temp = head;
		while(temp -> link != NULL && (temp -> link -> data) < X){
			temp = temp -> link;
		}
		newnode -> data = X;                 //data entered
		newnode -> link = temp -> link;			//newnode Link createrd 
		temp -> link = newnode;								
	}
}
print(node* &head){             //Function for printing newly inserted data
	node *count = head;
	while(count != NULL){                                
		printf("%d ",count -> data);                    //New data printed
		count = count -> link;							
	}
	scanf("\n");
}
int main()
{
	node *newnode = (node*)malloc(sizeof(node));
	node *head = newnode;                               
	newnode -> data = 12;       //1st node of linked list with 12 as an data and 
	newnode -> link = NULL;								 // link part as NULL
	int k;
	scanf("%d",&k);
	while(k--){
		int X;
		scanf("%d",&X);
		insert(head,X);
	}
	print(head);
	return 0;
}





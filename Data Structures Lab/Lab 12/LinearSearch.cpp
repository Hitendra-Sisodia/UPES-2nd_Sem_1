// linear search using arrays
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    int array[n];
    for(int i = 0 ; i < n ; i++){
        printf("Enter the element with position %d:",i+1);
        scanf("%d",&array[i]);
    }
    int key;
    printf("Enter the element to search in array:");
    scanf("%d",&key);
    for(int i = 0 ; i < n ; i++){
        if(array[i] == key){
            printf("Key found at pos: %d",i);
            break;
        }
        else if(i == n-1){
            printf("key not found");
        }
    }
}



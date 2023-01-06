// binary search using arrays
#include<stdio.h>
int binarysearch(int array[],int key,int n)
{
    int s = 0;
    int e = n - 1;
    while(s<=e){
        int mid = (s + e)/2;
        if(array[mid] == key){
            return mid;
        }
        else if(array[mid] > key){
            e = mid - 1;
        }
        else if(array[mid] < key){
            s = mid + 1;
        }
    }
}
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
    printf("%d found at :%d Index",key,binarysearch(array,key,n));
}





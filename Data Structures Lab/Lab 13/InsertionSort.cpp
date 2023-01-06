//Insertion sort
#include<stdio.h>
# define n 5
int main()
{
    int array[5] = {50,302,204,10,1};
    for(int i = 1 ; i < n ; i++){  o
        int temp = array[i];
        int j = i-1;   
        while(j>=0 && array[j]>temp){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = temp;
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d ",array[i]);
    }
    return 0;
}




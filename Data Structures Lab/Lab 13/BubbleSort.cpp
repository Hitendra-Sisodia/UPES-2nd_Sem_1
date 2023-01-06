// Bubble sort
#include<stdio.h>
# define n 5
int main()
{
    int array[n] =  {50,1000,30,20,10};
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n-1-i ; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d ",array[i]);  
    }
    return 0;
}




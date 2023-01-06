// selection sort
#include<stdio.h>
# define n 5
int main()
{
    int array[n] = {50,34,100,20,10};
    for(int i = 0 ; i < n ; i++){
        int min = i;
        for(int j = i+1 ; j < n ; j++){
            if(array[j] < array[i]){
                min = j;
            }
        }
        int temp = array[min];
        array[min] = array[i];
        array[i] = temp;
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d ",array[i]);
    }
    return 0;
}



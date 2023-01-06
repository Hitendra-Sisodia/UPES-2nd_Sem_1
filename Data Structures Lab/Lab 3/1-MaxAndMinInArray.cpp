#include<bits/stdc++.h>
int main()
{   
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){               //loop for input array
        scanf("%d",&a[i]);
    }
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]>max){           //if any value is greater than int_min stored inside max 
            max = a[i];
        }
    }
    for(int i=0;i<n;i++){ 
        if(a[i]<min){ 
            min = a[i];         //if any value is less than int_max stored inside max 
        }
    }
    printf("Max : %d\n",max);
    printf("Min : %d\n",min);
    return 0;
}






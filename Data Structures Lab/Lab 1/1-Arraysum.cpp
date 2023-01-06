#include<bits/stdc++.h>

int sum(int a[],int n)                 //recursive function
{   
    if(n<0){               //base condition
        return 0;
    } 
    else{                           //recursive condition               
        int c_pro=sum(a,n-1);
        int b_pro= a[n] + c_pro;
        return b_pro;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){             //loop for input array
        scanf("%d",&a[i]);
    }
    printf("%d",sum(a,n-1));
    return 0;
}







#include<bits/stdc++.h>
void dispArray1(int a1[], int n)        
{
    for(int j=0;j<n;j++){         //display array using index
        printf("%d ",a1[j]);
    }
    printf("\n");
}
void inpArray1(int a1[],int n)
{   
    for(int i=0;i<n;i++){          //input array using index
        scanf("%d",&a1[i]);
    }
    dispArray1(a1,n);
}
void dispArray2(int b1[], int m)
{
    for(int j=0;j<m;j++){          //display array using pointer
        printf("%d ",*(b1++));          
    }
    printf("\n");
}
void inpArray2(int b1[],int m)
{   
    for(int i=0;i<m;i++){            //input array using pointer
        scanf("%d",&b1[i]);
    }
    dispArray2(b1,m);
}
int main()
{
    int a1[100];
    int b1[100];
    int n,m;
    printf("Enter the number of elements in 1st array:");
    scanf("%d",&n);
    printf("Enter the number of elements in 2nd array:");
    scanf("%d",&m);
    inpArray1(a1,n);
    inpArray2(b1,m);
    return 0;
}









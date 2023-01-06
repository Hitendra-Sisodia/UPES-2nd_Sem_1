#include<bits/stdc++.h>
int main()
{
    int n;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    int a[n]; 
    for(int i=0;i<n;i++){               // loop for input of array
        cin>>a[i];
    }
    int pos1;
    printf("Enter the pos for inserting element 0 index based:");
    scanf("%d",&pos1);
    for(int i=n-1;i>=pos1;i--){         //loop for left shifting elements
        a[i+1]=a[i];
    }
    printf("Enter the element to insert in array:");
    scanf("%d",&a[pos1]);               //condition for inserting elements
    for(int j=0;j<=n;j++){              //loop for displaying updated array
        printf("%d ",a[j]);
    }
    printf("\n");
    int pos2;
    printf("Enter the position of deletion of elements:");
    scanf("%d",&pos2);
    for(int i=pos1;i<=n;i++){            //loop right shifting elements
        a[i-1]=a[i];
    }
    for(int j=0;j<n;j++){                //loop for displaying updated array
        printf("%d ",a[j]);
    }
    return 0;
}





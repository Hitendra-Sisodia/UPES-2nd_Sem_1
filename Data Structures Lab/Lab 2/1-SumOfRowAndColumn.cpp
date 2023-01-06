#include<bits/stdc++.h>
int main()
{
    int a[3][5];
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&a[i][j]);         //loop for input array
        }
    }
    for(int i=0;i<3;i++){             //sum of elements rowwise
        int rowsum=0;                    //temp variable
        for(int j=0;j<5;j++){                          
            rowsum +=a[i][j];
            if(j==4){ 
                printf("Row %d sum:%d\n",i,rowsum);
            }
        }
    }
    for(int i=0;i<5;i++){
        int colsum=0;                    //temp variable
        for(int j=0;j<3;j++){        //sum of elements of arraycolumnwise
            colsum += a[j][i];
            if(j==2){
                printf("Column %d sum:%d\n",i,colsum);
            }
        }
    }
    return 0;
}













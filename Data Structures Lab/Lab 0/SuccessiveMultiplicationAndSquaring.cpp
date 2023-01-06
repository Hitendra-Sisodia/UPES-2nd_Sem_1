// Name: Hitendra Sisodia
// Sap id: 500091910
#include<bits/stdc++.h>
int successiveMultiplication(int X,int power)   
//function for successive Multiplication
{
    int i,temp=1;
    for(i=1;i<=power;i++){
        temp*=X;
    } 
    return temp;
}
int binarycal(int n)                     //function for binary conversion
{   
    int count=0,power=0;
    while(n>0){
        int lastbit = n%2;
        count=(lastbit * successiveMultiplication(10,power)) + count;
        n/=2;
        power++;
    }
    return count;
}
int successiveSquaring(int X, int n)                //function for successive Squaring
{   
    int count=0,i=1;
    do{
        count=successiveMultiplication(X,i);
        i*=2;
    }
    while(i<=n);
    return count;
}
int main()
{
    int X,n;
    scanf("%d%d",&X,&n);
    int counter=0,answer=1,start=0,value,lastdigit;
    printf("Output computed by successive multiplication:%d\n",successiveMultiplication(X,n));
    value=binarycal(n);
    while(value>0){
        lastdigit=value%10;
        counter=successiveMultiplication(X,start);
        if(lastdigit==1){
            answer=answer*successiveSquaring(X,counter);
        }
        start++;
        value/=10;
    }
    printf("Output computed by successive squaring:%d\n",answer);
    return 0;
}



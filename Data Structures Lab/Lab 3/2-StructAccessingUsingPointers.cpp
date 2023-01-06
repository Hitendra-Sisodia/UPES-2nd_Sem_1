#include<bits/stdc++.h>
struct product                            // struct name
{
    char Prod_name[30];                  // struct defination
    float Price_pu;
    int Num_quan;
    float Amount_spent;
};

int main()
{
    struct product *ptr;                    //struct variable
    struct product p;
    ptr = &p;                               //refernce for pointer 
    //input of elements
    scanf("%s", &ptr -> Prod_name);
    scanf("%f", &ptr -> Price_pu);
    scanf("%d", &ptr -> Num_quan);
    ptr -> Amount_spent = (ptr ->Price_pu) * (ptr -> Num_quan);
    // Output
    printf("OutPut\n");
    printf("Name : %s\n",ptr -> Prod_name);  //accessing struct elements
    printf("Product Price : %f\n",ptr -> Price_pu);
    printf("Product Quantity : %d\n",ptr -> Num_quan);
    printf("Total amount : %f\n",ptr -> Amount_spent);
    return 0;
}


















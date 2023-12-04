#include<stdio.h>
int main()
{
    int a,b ;
     printf("Enter First Number : ");
     scanf("%d",&a);
     printf("Enter Second Number : ");
     scanf("%d",&b);

     a=a+b;
     b=a-b;
     a=a-b;

     printf("After Swapping Numbers are\n");
     printf("A after swapping = %d\n",a);
     printf("B after swapping = %d\n",b);
    return 0;
}
#include<stdio.h>
int main()
{
    int x;
    printf("Enter first Number x : ");
    scanf("%d",&x);
    int y;
    printf("Enter second Number y : ");
    scanf("%d",&y);
    int z;
    printf("Enter third Number z : ");
    scanf("%d",&z);
    if(x>y && x>z)
    {
        printf("X is gretest Number");
    }
    if(y>x && y>z)
    {
        printf("Y is gretest Number");
    }else
    {
        printf("Z is gretest Number");
    }
    return 0;
}
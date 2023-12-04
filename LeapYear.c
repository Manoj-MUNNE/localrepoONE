#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Year : ");
    scanf("%d",&n);
    if(n%4==0 || n%400==0)
    {
        printf("Given year is leap ");
    }else
    {
        printf("Given year is simple year");
    }
    return 0;
}
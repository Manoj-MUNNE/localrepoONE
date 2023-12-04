// reversing 3 digit numbers

#include<stdio.h>
int main()
{
	int number, reverse =0;
	printf("Enter three digit numbers : ");
	scanf("%d",&number);
	printf("Real Number is :%d\n",number);
	while(number !=0)
	{
	reverse= reverse*10 + number % 10 ;
	number = number / 10 ;
	}	
	printf("Reverse Number is :%d\n",reverse);
	
	return 0;
}

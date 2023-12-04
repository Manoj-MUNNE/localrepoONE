#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character : ");
	scanf(" %c", &ch);

	if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
            ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
	printf("Given Alphabate is vowel %c\n",ch);
	}else
	{
	printf("Given Alphabate is consonent %c\n",ch);
	}
	
	return 0;
}
include<stdio.h>
#include<conio.h>
int main()
{
	char str[10],i,size,count=0,low=0,num=0;
	printf("enter string:");
	gets(str);
	char ch[10];
	for(i=0;str[i]!='\0';i++)
	{
		size++;
	}
	for(i=size-1;i>=0;i--)
	{
	 ch[size-i-1]=str[i];
	}
	for(count=1,i=0;i<size;i++)
	{
		if(ch[i]!=str[i])
		count=0;
	}
	if(count==1)
	printf("\n palindrome");
	else
	 printf("\n not palindrome");
			return 0;
}

Input:
madam
output:
palindrome
Example2:
Input: 
apple
Output:
not palindrom

#include<stdio.h>
#include<conio.h>
int main()
{
	char str[10],i,j,count=0,low=0,num=0;
	printf("enter string:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(isupper(str[i]))
		count++;
		if(islower(str[i]))
		low++;
		if(isdigit(str[i]))
		num++;
	}
	printf("upper number==%d\n",count);
		printf("lower number==%d\n",low);
			printf(" number==%d",num);
			return 0;
}

input: Aditya@123
Output: 
Count of uppercase characters: 1
Count of lowercase characters: 5
Count of numbers : 3

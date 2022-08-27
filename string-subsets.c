#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[100],i,j,temp;
	scanf("%s",&a);
	int n=strlen(a);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
		
		  for(temp=j;temp<i+j+1;temp++)
		  {
		  printf("%c",a[temp]);
	      } 
	      printf("\n");
		}
	}
	return 0;
}

input:
abcd
output:
a
b
c
d
ab
bc
cd
abc
bcd
abcd

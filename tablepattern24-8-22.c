#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,k,j,a[100][100];
	printf("enter n :");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for(j=6;j>n;j--)
		{
			for(k=1;k<=i;k++)
			{
			printf("%d\n",i*k);
		}
		
		}
		printf("\n");
	}
	return 0;
}
output
enter n:4
  1
  2 4 6
  3 6 9 12

#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,k,j,a[100][100];
	printf("enter n :");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for(j=1;j<=i;j++)
		{
			
			printf("%d",j);
		
		}
		printf("\n");
	}
	return 0;
}

output
1
12
123
1234
12345

#include<stdio.h>
#include<string.h>
main()
{
	char ch[100];
	int i,n=0;
	scanf("%s",&ch);
	for(i=0;ch[i]!='\n';i++){
		if(ch[i]==' '){
			n++;
		}
	}
	printf("no. of words=%d",n+1);
}

Input:
I love India
Output:
no. of words=3






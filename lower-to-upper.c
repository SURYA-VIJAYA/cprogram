#include<stdio.h>
#include<string.h>
void main(){
	char ch[100];
	int i;
	printf("Enter string:");
	scanf("%s",&ch);
	for(i=0;ch[i]!=NULL;i++){
		if(i%2==0){
			printf("%c",ch[i]);
		}
		else{
		printf("%c",toupper(ch[i]));
		}
	}	
}

Input:
Enter string:aditya
Output:
aDiTyA

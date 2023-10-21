#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i;
	char * ptr;
	printf("enter no of character \n");
	scanf("%d",&n);
	ptr=(char*)malloc(n*sizeof(char)+1);
	printf("accept string \n");
	scanf("%s",ptr);
	printf("name is %s",ptr);
	free(ptr);
}

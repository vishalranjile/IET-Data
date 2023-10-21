#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,sum=0;
	int *ptr;
	printf("enter number of elements");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	printf("enter elements");
	for(int i=0;i<=n;i++)
	{
		scanf("%d",&ptr[i]);
	}
   for(int j=0;j<=n;j++)
   {
   
   	sum=sum+ptr[j];
   }
   printf("sum is %d",sum);
}

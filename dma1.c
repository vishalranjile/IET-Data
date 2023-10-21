#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,sum=0;
	int *ptr;
	int i=0;
	int j=0;
	printf("enter number of elements\n");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	printf("enter elements\n");
	for( i=0;i<n;i++)
	{
		scanf("%d",&ptr[i]);
	}
   for(j=0;j<n;j++)
   {
   
   	sum=sum+ptr[j];
   }
   printf("sum is %d",sum);
   
   free(ptr);
}

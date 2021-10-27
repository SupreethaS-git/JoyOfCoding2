#include<stdio.h>
#include<stdlib.h>


int main()
{
	int n,i,j,sum;int *a;
	int flag=0;
	printf("Enter number of elements:");
	scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*n);
	printf("Enter elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter sum:");
	scanf("%d",&sum);

	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==sum)
			{
				flag=1;
				printf("Indices found at %d and %d (%d,%d)\n",i,j,a[i],a[j]);
			}
		}
	}
	
	if(flag==0)
	printf("No indices found\n");
}
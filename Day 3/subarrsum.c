#include<stdio.h>
#include<stdlib.h>



int main()
{
	int n,i,k,j;int sum=0;int flag=0;
	printf("Enter length:");
	scanf("%d",&n);
	int *a=(int*)malloc(sizeof(int)*n);
	int *b=(int*)malloc(sizeof(int)*n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    
	printf("Enter sum:");
	scanf("%d",&k);
	    
	for(i=0;i<n-1;i++)
	{
	    int count=0;
	    b[count]=a[i];count++;
	    sum=a[i];
	    if(sum==k)
	    {
	        printf("%d\n",a[i]);
	        flag=1;
	    }
	    for(j=i+1;j<n;j++)
	    {
	        b[count++]=a[j];
	        sum=sum+a[j];
	        if(sum==k)
	        {
	            flag=1;
	            for(i=0;i<count;i++)
	                printf("%d,",b[i]);
	            printf("\n");
	        }
	    }

	}
	
		    
	    if(flag==0)
	    printf("Not possible to obtain sum");

}

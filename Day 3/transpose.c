
#include<stdio.h>
#include<stdlib.h>



int main()
{
	int i,j,row,col;
	printf("Enter the number of rows and columns:");
	scanf("%d%d",&row,&col);
	int **a=(int**)malloc(sizeof(int)*row);
	for(i=0;i<row;i++)
		a[i]=(int*)malloc(sizeof(int)*col);
	printf("Enter the matrix:");
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);
	printf("Entered matrix is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	int start=0;
	int end=col-1;
	while(start<end)
	{
		for(i=0;i<row;i++)
	{
		int temp=a[i][start];
		a[i][start]=a[i][end];
		a[i][end]=temp;
	}
	start++;
	end--;
	}

	int **transpose=(int**)malloc(sizeof(int)*col);
	for(i=0;i<col;i++)
		transpose[i]=(int*)malloc(sizeof(int)*row);

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			transpose[j][i]=a[i][j];
		}
		
	}

	printf("Rotated matrix is:\n");
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("%d\t",transpose[i][j]);
		}
		printf("\n");
	}


	

}

#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int *a=(int*)malloc(sizeof(int)*n);
    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("Array not distict");
                exit(0);
            }
        }
    }
    
    printf("Array is distinct");
}

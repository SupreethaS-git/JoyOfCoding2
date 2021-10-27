#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int mystrlen(char a[])
{
	
	int count=0;int i=0;
	while(a[i]!='\0')
	{
		count++;
		i++;
	}
	return count;
}

int main()
{
    char s[100],c;
    printf("Enter a string:\n");
    scanf("%[^\n]*c",s);
    int n=mystrlen(s);
    int i,j;
    int f[40]={0};
    for(i=0;i<n;i++)
    {
        f[i]=1;
       for(j=i+1;j<n;j++)
      {
          if(s[i]==s[j])
          {
          f[i]++;
          s[j]='0';
          }
      }
    }
    
    int maxf=f[0];
    char maxs;
    for(i=0;i<n;i++)
    {
        if(f[i]!=0 && s[i]!='0' && s[i]!=' ')
        {
            if(f[i]>maxf)
            {
            maxf=f[i];
            maxs=s[i];
            }
        }
    }
    
    printf("%c occurs %d times",maxs,maxf);
    
}
#include<stdio.h>

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
	char s[200];int count=0;char sf[100];int i=1;
	printf("Enter a String:");
	scanf("%[^\n]",s);
	int len=mystrlen(s);

	
	
	if(len!=0)
	{
		
		count++;
		sf[0]=s[0];
	}
	
	while(s[i]!='\0')
	{
		if(s[i]==' ')
		{
			if(s[i+1]>='A' && s[i+1]<='Z')
			{
			count++;
			sf[count-1]=s[i+1];
			}	
		}
		i++;
	}

	int j=0;
	while(j<count)
	{
		printf("%c",sf[j]);
		j++;
	}
	
	
	
}

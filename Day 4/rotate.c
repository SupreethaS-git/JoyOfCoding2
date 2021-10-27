#include<stdio.h>

int mystrcmp(char s1[],char s2[])
{
    int i=0;int flag=0;
    while(s1[i]!='\0' && s2[i]!='\0')
    {
        if(s1[i]!=s2[i])
        {
            flag=1;
            break;
        }
        i++;
    }
    
    if((s1[i]=='\0' && s2[i]!='\0' )||(s2[i]=='\0' && s1[i]!='\0' ) )
    flag=1;
    
    return flag;
}

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

void rotate(char s[])
{
	int len=mystrlen(s);
	int i;
	char temp=s[0];
	for(i=0;i<len-1;i++)
		s[i]=s[i+1];
	s[len-1]=temp;
}

int main()
{
	char s[30];char r[30];
	printf("Enter String1:");
	scanf("%[^\n]%*c",s);
	printf("Enter String2:");
	scanf("%[^\n]",r);
	rotate(s);
	int flag=mystrcmp(s,r);
	int i;
	printf("Rotated string1:");
	for(i=0;i<mystrlen(s);i++)
	printf("%c",s[i]);
	if(flag==0)
	printf("\nString 2 is the rotated string of string 1");
	
	else
	printf("\nString 2 is not rotated string of string 1");
}

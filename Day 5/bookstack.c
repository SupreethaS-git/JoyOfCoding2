#include <stdio.h>
#include <stdlib.h>
#define stacksize 5

struct book
{
	int Book_id;
	char Book_name[30];
	char Book_author[30];
	float Book_price;
};
typedef struct book *BOOK;

BOOK getbook()
{
	BOOK p;
	p=(BOOK)malloc(sizeof(struct book));
	return p;
}


void push(int *top,BOOK s[])
{
	BOOK item=getbook();
	if(*top==stacksize-1)
	{
		printf("There is no space for another book\n");
		return;
	}
	
	printf("Enter details of the book:\n");
	printf("Book id:");
	scanf("%d",&item->Book_id);
	printf("Book name:");
	scanf("%s",item->Book_name);
	printf("Book author:");
	scanf("%s",item->Book_author);
	printf("Book price:");
	scanf("%f",&item->Book_price);

	*top=*top+1;
	s[*top]=item;
}

void pop(int *top,BOOK s[])
{
	BOOK item;
	if(*top==-1)
	{
		printf("There are no books to remove\n");
		return ;
	}
	
	printf("Deleted book:\n");
    
    printf("%d\t%s\t%s\t%f\n",item->Book_id,item->Book_name,item->Book_author,item->Book_price);
	item=s[*top];
	*top=*top-1;
	return;
}

void display(int top,BOOK s[])
{
	int i;
	if(top==-1)
	{
		printf("There are no books to display\n");
		return;
	}

	printf("The books in the library are:\n");
	printf("Book id\tBook name\tAuthor\tPrice\n");
	for(i=0;i<=top;i++)
	{
	printf("%d\t%s\t%s\t%f",s[i]->Book_id,s[i]->Book_name,s[i]->Book_author,s[i]->Book_price);
	}
}

int main()
{
	int top,choice;
	top=-1;
	BOOK s[stacksize];
	while(1)
	{

		printf("\n1.Add a book 2.Delete a book 3.Display the books in the library 4.Exit\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push(&top,s);
			break;
			case 2:pop(&top,s);
			break;
			case 3:display(top,s);
			break;
			case 4:exit(0);
			default:printf("Enter a valid number\n");
		}
	}
}



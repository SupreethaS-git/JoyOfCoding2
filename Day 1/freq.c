#include <stdio.h>
#include<stdlib.h>

int main()
{
    int size, i, j, count;
    printf("Enter size of array: ");
    scanf("%d", & size);
    int* arr=(int*)malloc(sizeof(int)*size);
    int* freq=(int*)malloc(sizeof(int)*size);
     printf("Enter elements in array: ");
    for (i = 0; i < size; i++)
     {
        scanf( "%d", & arr[i]);
        freq[i] = -1;
     }
    for (i = 0; i < size; i++)
    {
        count = 1;
        for (j = i + 1; j < size; j++)
        {
         if (arr[i] == arr[j])
        {
            count++;
             freq[j] = 0;

         }

    }
    if (freq[i] != 0)
    {

      freq[i] = count;

    }

  }


  printf("Frequency of all elements of array: n");

  for (i = 0; i < size; i++)

  {

    if (freq[i] != 0)

    {

      printf("\n%d occurs %d times\n", arr[i], freq[i]);

    }
  }
}
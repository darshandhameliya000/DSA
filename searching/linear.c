
#include <stdio.h>
#include<stdlib.h>
int main()
{
  int  i, n;

  printf("Enter number array position \n");
  scanf("%d", &n);

  

    int arr[n],search;
  for (i = 0; i < n; i++)
  
  {
    arr[i]=rand()%n+1;
    printf("enter the number:- %d\n",arr[i]);
    
  }

  printf("Enter a number to search\n"); 
  
  scanf("%d", &search);

  for (i = 0; i < n; i++)
  {
    if (arr[i] == search)    
    {
      printf("%d this is present at location:- %d\n", search, i+1);
      break;
    }
  }
  if (i == n)
  {
    printf("%d this is not present in the arra.\n", search);
  }

  return 0;
}




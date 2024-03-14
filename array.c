#include<stdio.h>

int main()
{
    int num[5],n,temp=0;
    printf("Enter the value:- ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Enter the number [%d]:- ",i);
        scanf("%d",&num[i]);

    }
    temp=num[0];
   num[0]=num[n-1];
   num[n-1]=temp;
   

    for(int i=0;i<n;i++)
    {
        printf("This Number [%d]: %d\n",i,num[i]);
    }
}

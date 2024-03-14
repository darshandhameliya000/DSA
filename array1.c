#include<stdio.h>

int main()
{
    int num[50],n,temp=0;
    printf("Enter the value:- ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Enter the number [%d]:- ",i);
        scanf("%d",&num[i]);

    }
    for(int i=0;i<n-1;i++)
    {
        temp=num[i];
        num[i]=num[i+1];
        num[i+1]=temp;
    }

    for(int i=0;i<n;i++)
    {
        printf("This Number [%d]: %d\n",i,num[i]);
    }
}

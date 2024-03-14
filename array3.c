#include <stdio.h>

int main()
{
    int n1,n2,n3,a[50],b[50],c[50];

    printf("Enter the first array value :- ");
    scanf("%d",&n1);

    for(int i=0;i<n1;i++)
    {
        printf("a[%d] :- ",i);
        scanf("%d",&a[i]);
    }

    printf("Enter the second array value :- ");
    scanf("%d",&n2);

    for(int i=0;i<n2;i++)
    {
        printf("b[%d] :- ",i);
        scanf("%d",&b[i]);
    }

    n3=n1+n2;

    for(int i=0;i<n1;i++)
    {
        c[i] = a[i];
    }
    for(int j=0;j<n2;j++)
    {
        c[j+n1] = b[j];
    }

    
    for(int i=0;i<n3;i++)
    {
        printf("c[%d] :- %d\n",i,c[i]);
    }
    return 0;
}
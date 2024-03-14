#include<stdio.h>
void sort()
{
    int i,j,k,n;
    printf("enter the number of elemwnt:- ");
    scanf("%d",&n);

    int arr[n];

    for(i=0;i<n;i++)
    {
        arr[i]=rand()%50+1;
        printf("the number of element is:- %d\n",arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            swap(arr[j],arr[j+1]);
        }

    }
    for(i=0;i<n;i++)
    {
        printf("After the swapping value is:- %d\n",arr[i]);
    }


    

}
int main()
{
    sort();
}

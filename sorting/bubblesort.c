#include <stdio.h>
#include <stdlib.h>
void sort()
{
    int i, j, n, k;

    printf("enter the number of element:- ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        arr[i] = rand() % n + 1;
        printf("the number of element is:- %d\n", arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                k = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = k;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("After the swapping value is:- %d\n", arr[i]);
    }
}
int main()
{
    sort();
}

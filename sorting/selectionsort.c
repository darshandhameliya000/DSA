#include <stdio.h>
#include <stdlib.h>
void selection()
{
    int i, j, k, n;

    printf("Enter the number of element:- ");
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        arr[i] = (rand() % n) + 1;
        printf("the number of element:- %d\n", arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                k = arr[i];
                arr[i] = arr[j];
                arr[j] = k;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("after the swapping value is:- %d\n", arr[i]);
    }
}
int main()
{
    selection();
}
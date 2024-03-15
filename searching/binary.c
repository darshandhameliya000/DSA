#include <stdio.h>
int main()
{
    int i, n;

    printf("Enter the number of element:- ");
    scanf("%d", &n);

    int arr[n], l, h, mid, check = 0, num;

    for (i = 0; i < n; i++)
    {
        printf("Enter the number:- ");
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of search:- \n");
    scanf("%d", &num);
    l = 0;
    h = n-1;
    mid = (l + h) / 2;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (arr[mid] == num)
        {
            check = 1;
            break;
        }
        else if (arr[mid] < n)
        {
            l = mid + 1;
        }
        else if (arr[mid] > n)
        {
            h = mid - 1;
        }
    }

    if (check == 1)
    {
        printf("this element position:- %d", mid + 1);
    }
    else
    {
        printf("this is not element in array");
    }
}

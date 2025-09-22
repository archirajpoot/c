#include <stdio.h>
int bubblesort(int arr[5])
{
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]=%d", i, arr[i]);
    }
}
int main()
{
    int arr[5] = {2, 7, 4, 6, 8};
    bubblesort(arr);
    return 0;
}
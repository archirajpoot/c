#include <stdio.h>

int binarySearch(int arr[], int low, int high, int t) {
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == t)
        return mid;
    else if (arr[mid] >t)
        return binarySearch(arr, low, mid - 1, t); 
    else
        return binarySearch(arr, mid + 1, high,t);
}


int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr) / sizeof(arr[0]);
    int t = 10;

    int result = binarySearch(arr, 0, n - 1, t);

    if (result == -1)
        printf(" not found\n");
    else
        printf("found at index %d\n", result);

    return 0;
}


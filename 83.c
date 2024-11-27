#include <stdio.h>

int findMax(int arr[], int size) 
{
    int max = arr[0];
    for (int i = 1; i < size; i++) 
    {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

int main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Maximum element is %d\n", findMax(arr, n));
    return 0;
}

//92) Find the Biggest Number in an Array

#include <stdio.h>

int findMax(int *arr, int n) 
{
    int max = *arr;
    for (int i = 1; i < n; i++) 
    {
        if (*(arr + i) > max) 
        {
            max = *(arr + i);
        }
    }
    return max;
}

int main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("The largest number is: %d\n", findMax(arr, n));

    return 0;
}

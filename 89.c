//89) Copy One Array into Another in Reverse Order

#include <stdio.h>

void copyReverse(int *s, int *d, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        *(d + i) = *(s + (n - i - 1));
    }
}

int main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr1[i]);
    }

    copyReverse(arr1, arr2, n);

    printf("Elements of the reversed array:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}

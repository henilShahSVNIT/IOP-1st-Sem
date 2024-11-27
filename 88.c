//88) Copy Elements of One Array to Another Using Pointers

#include <stdio.h>

void copyArray(int *f, int *s, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        *(s + i) = *(f + i);
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

    copyArray(arr1, arr2, n);

    printf("Elements of the second array:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}

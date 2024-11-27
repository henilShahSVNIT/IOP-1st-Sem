//72) Program to Rotate an Array by N Positions

#include <stdio.h>

void rotateArray(int arr[], int n, int positions) 
{
    int temp[positions];
    for( int i = 0; i < positions; i++ ) 
    {
        temp[i] = arr[i];
    }
    for( int i = 0; i < n - positions; i++ ) 
    {
        arr[i] = arr[i + positions];
    }
    for( int i = 0; i < positions; i++ ) 
    {
        arr[n - positions + i] = temp[i];
    }
}

int main() 
{
    int n, positions;
    
    printf("Enter the size of the array ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter the elements of the array\n");
    for( int i = 0; i < n; i++ ) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate ");
    scanf("%d", &positions);

    rotateArray(arr, n, positions);

    printf("Array after rotation\n");
    for( int i = 0; i < n; i++ ) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

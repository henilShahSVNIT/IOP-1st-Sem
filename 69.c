//69) Program to Perform Linear Search on an Array

#include <stdio.h>

int linearSearch( int arr[], int size, int key ) 
{
    for( int i = 0; i < size; i++ ) 
    {
        if( arr[i] == key ) 
        {
            return i;
        }
    }
    return -1;
}

int main() 
{
    int n, key, i;
    
    printf("Enter the size of the array ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter the elements of the array\n");
    for( i = 0; i < n; i++ ) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search ");
    scanf("%d", &key);

    int result = linearSearch(arr, n, key);

    if( result != -1 ) 
    {
        printf("Element %d found at index %d.\n", key, result);
    } 
    else 
    {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}

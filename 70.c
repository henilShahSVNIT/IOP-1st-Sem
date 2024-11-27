//70) Program to Read an Array and Print the Occurrence of Any Particular Element in the Array

#include <stdio.h>

int main() 
{
    int n, key, count = 0;

    printf("Enter the size of the array ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array\n");
    for( int i = 0; i < n; i++ ) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find its occurrence ");
    scanf("%d", &key);

    for( int i = 0; i < n; i++ ) 
    {
        if( arr[i] == key ) 
        {
            count++;
        }
    }

    if( count > 0 ) 
    {
        printf("Element %d occurs %d times in the array.\n", key, count);
    } 
    else 
    {
        printf("Element %d is not found in the array.\n", key);
    }

    return 0;
}

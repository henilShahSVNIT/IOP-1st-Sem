//74) Program to Merge Two Sorted Arrays into a Single Sorted Array

#include <stdio.h>

void mergeArrays(int A[], int sizeA, int B[], int sizeB, int C[]) 
{
    int i = 0, j = 0, k = 0;
    while( i < sizeA && j < sizeB ) 
    {
        if( A[i] < B[j] ) 
        {
            C[k++] = A[i++];
        } 
        else 
        {
            C[k++] = B[j++];
        }
    }
    while( i < sizeA ) 
    {
        C[k++] = A[i++];
    }
    while( j < sizeB ) 
    {
        C[k++] = B[j++];
    }
}

int main() 
{
    int sizeA, sizeB;

    printf("Enter the size of array A ");
    scanf("%d", &sizeA);
    int A[sizeA];
    
    printf("Enter the elements of array A (sorted)\n");
    for( int i = 0; i < sizeA; i++ ) 
    {
        scanf("%d", &A[i]);
    }

    printf("Enter the size of array B ");
    scanf("%d", &sizeB);
    int B[sizeB];

    printf("Enter the elements of array B (sorted) \n");
    for( int i = 0; i < sizeB; i++ ) 
    {
        scanf("%d", &B[i]);
    }

    int C[sizeA + sizeB];
    mergeArrays(A, sizeA, B, sizeB, C);

    printf("Merged array is \n");
    for( int i = 0; i < sizeA + sizeB; i++ ) 
    {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}

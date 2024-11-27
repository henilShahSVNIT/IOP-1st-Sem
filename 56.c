#include <stdio.h>

int main()
{
    int arr[10];
    int pos = 0 , neg = 0 , zer = 0;
    for(int i = 0 ; i < 10 ; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] > 0)
            pos++;
        else if(arr[i] < 0)
            neg++;
        else
            zer++;
    }
    printf("%d is the number of positive numbers and %d is the number of negative numbers and %d is the number of zero elements!",pos,neg,zer);
}
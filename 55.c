#include <stdio.h>

int main()
{
    int arr[10];
    int odd = 0 , even = 0;
    for(int i = 0 ; i < 10 ; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("%d is the number of odd numbers and %d is the number of even numbers!",odd,even);
}
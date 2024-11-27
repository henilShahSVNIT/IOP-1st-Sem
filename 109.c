#include <stdio.h>

int main() 
{
    int num = 5;
    int *ptr = &num;

    printf("Original value: %d\n", num);
    *ptr = 10;
    printf("Modified value: %d\n", num);

    return 0;
}

//90) Find Length of String (Including and Excluding Spaces)

#include <stdio.h>

void findLengths(char *str, int *total, int *excludingSpaces) 
{
    *total = *excludingSpaces = 0;
    while (*str != '\0') 
    {
        (*total)++;
        if (*str != ' ') 
        {
            (*excludingSpaces)++;
        }
        str++;
    }
}

int main() 
{
    char str[100];
    int total, excludingSpaces;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    findLengths(str, &total, &excludingSpaces);

    printf("Total length (including spaces): %d\n", total);
    printf("Length (excluding spaces): %d\n", excludingSpaces);

    return 0;
}

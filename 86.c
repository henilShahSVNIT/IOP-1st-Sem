#include <stdio.h>

int findLength(char str[]) 
{
    int length = 0;
    while (str[length] != '\0') 
    {
        length++;
    }    
    return length;
}

int main() 
{
    char str[100];
    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);
    printf("Length of the string is %d\n", findLength(str));
    return 0;
}

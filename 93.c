//93) Count Words in a String Using Pointers

#include <stdio.h>
#include <ctype.h>

int countWords(char *str) 
{
    int count = 1;
    while (*str != '\0') 
    {
        if ((*str)==' ') 
        {
            count++;
        } 
        str++;
    }
    return count;
}

int main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Number of words: %d\n", countWords(str));

    return 0;
}

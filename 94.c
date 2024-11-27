//94) Copy String in Reverse Order Using Pointers

#include <stdio.h>
#include <string.h>

void reverseCopy(char *str1, char *str2) 
{
    int len = strlen(str1) - 1;  // Ignore newline at the end
    for (int i = 0; i < len; i++) 
    {
        *(str2 + i) = *(str1 + len - i - 1);
    }
    str2[len] = '\0';  // Null-terminate the string
}

int main() 
{
    char str[100], reversed[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    reverseCopy(str, reversed);

    printf("Reversed string: %s\n", reversed);

    return 0;
}

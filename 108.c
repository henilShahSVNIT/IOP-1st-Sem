#include <stdio.h>
#include <string.h>

// Copy one string into another
void stringCopy(char *str1, char *str2) 
{
    while (*str2) 
    {
        *str1++ = *str2++;
    }
    *str1 = '\0';
}

// Compare two strings
int stringCompare(char *str1, char *str2) 
{
    while (*str1 && (*str1 == *str2)) 
    {
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}

// Concatenate two strings
void stringConcat(char *str1, char *str2) 
{
    while (*str1) 
    {
        str1++;
    }
    while (*str2) 
    {
        *str1++ = *str2++;
    }
    *str1 = '\0';
}

// Reverse a string
void stringReverse(char *str) 
{
    char *start = str, *end = str + strlen(str) - 1;
    while (start < end) 
    {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main()
{
    char str1[100], str2[100], str3[100];
    int compareResult;

    // Input strings for demonstration
    printf("Enter the first string (str1): ");
    scanf("%s", str1);
    printf("Enter the second string (str2): ");
    scanf("%s", str2);

    // Demonstrate stringCopy
    printf("\nDemonstrating stringCopy:\n");
    stringCopy(str3, str1); // Copy str1 into str3
    printf("str3 after copying str1: %s\n", str3);

    // Demonstrate stringCompare
    printf("\nDemonstrating stringCompare:\n");
    compareResult = stringCompare(str1, str2);
    if (compareResult == 0) 
    {
        printf("str1 and str2 are equal.\n");
    } 
    else if (compareResult < 0) 
    {
        printf("str1 is lexicographically smaller than str2.\n");
    } 
    else 
    {
        printf("str1 is lexicographically greater than str2.\n");
    }

    // Demonstrate stringConcat
    printf("\nDemonstrating stringConcat:\n");
    stringConcat(str1, str2); // Concatenate str2 into str1
    printf("str1 after concatenation with str2: %s\n", str1);

    // Demonstrate stringReverse
    printf("\nDemonstrating stringReverse:\n");
    stringReverse(str1); // Reverse str1
    printf("str1 after reversing: %s\n", str1);

    return 0;
}
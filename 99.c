#include <stdio.h>

int main() 
{
    FILE *file;
    char filename[]= "Text.txt";
    char ch;
    int vowelCount = 0;

    file = fopen(filename, "r");
    if (file == NULL) 
    {
        printf("Could not open file %s.\n", filename);
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
        {
            vowelCount++;
        }
    }

    fclose(file);
    printf("Number of vowels in %s: %d\n", filename, vowelCount);

    return 0;
}

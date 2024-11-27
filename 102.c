#include <stdio.h>

int main() 
{
    FILE *file;
    char ch;
    char filename[]= "Text.txt";
    int characters = 0, words = 0, lines = 0;

    file = fopen(filename, "r");
    if (file == NULL) 
    {
        printf("Could not open file %s.\n", filename);
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) 
    {
        characters++;
        if (ch == ' ' || ch == '\n') 
        {
            words++;
        }
        if (ch == '\n') 
        {
            lines++;
        }
    }

    fclose(file);

    printf("Number of characters: %d\n", characters);
    printf("Number of words: %d\n", words + 1); // Adding 1 for the last word
    printf("Number of lines: %d\n", lines + 1); // Adding 1 for the last line

    return 0;
}

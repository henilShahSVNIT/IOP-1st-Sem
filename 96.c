//96) Sort Strings in Ascending Order Using Pointers

#include <stdio.h>
#include <string.h>

void sortStrings(char *arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (strcmp(arr[i], arr[j]) > 0) 
            {
                char *temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() 
{
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char *strings[n];
    char buffer[100];
    for (int i = 0; i < n; i++) 
    {
        printf("Enter string %d: ", i + 1);
        scanf("%s", buffer);
        strings[i] = strdup(buffer); //Copies string buffer to strings
    }

    sortStrings(strings, n);

    printf("Sorted strings:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%s\n", strings[i]);
    }

    return 0;
}

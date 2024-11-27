#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) 
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

int findNext(char str[], int length) 
{
    int i = length - 2;
    while (i >= 0 && str[i] >= str[i + 1]) 
    {
        i--;
    }

    if (i == -1) return 0;

    int j = length - 1;
    while (str[j] <= str[i]) 
    {
        j--;
    }
    swap(&str[i], &str[j]);

    int left = i + 1, right = length - 1;
    while (left < right) 
    {
        swap(&str[left], &str[right]);
        left++;
        right--;
    }
    return 1;
}

int main() 
{
    int t;
    scanf("%d", &t);
    while (t--) 
    {
        char str[101];
        scanf("%s", str);
        if (findNext(str, strlen(str)))
            printf("%s\n", str);
        else
            printf("no answer\n");
    }
    return 0;
}

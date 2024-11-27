#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) 
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *str, int l, int r) 
{
    if (l == r) //When l == r (left index equals right index), the function prints the current string (str) as one of the permutations
    {
        printf("%s ", str);
    } 
    else 
    {
        for (int i = l; i <= r; i++) 
        {
            swap((str + l), (str + i));
            permute(str, l + 1, r);
            swap((str + l), (str + i)); //Backtrack: Swaps back the characters to restore the original order of the string
        }
    }
}

int main() 
{
    char str[] = "ABCD";
    int n = strlen(str);
    permute(str, 0, n - 1);
    return 0;
}

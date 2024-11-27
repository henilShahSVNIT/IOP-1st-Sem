#include <stdio.h>
#include <string.h>

int main() 
{
    int N;
    scanf("%d", &N);
    
    int gemElements[26] = {0};
    for (int i = 0; i < N; i++) 
    {
        char rock[101];
        scanf("%s", rock);
        
        int uniqueElements[26] = {0};
        for (int j = 0; rock[j] != '\0'; j++) 
        {
            uniqueElements[rock[j] - 'a'] = 1;
        }
        
        for (int j = 0; j < 26; j++) 
        {
            gemElements[j] += uniqueElements[j];
        }
    }
    
    int count = 0;
    for (int i = 0; i < 26; i++) 
    {
        if (gemElements[i] == N) 
        {
            count++;
        }
    }
    
    printf("%d\n", count);
    return 0;
}

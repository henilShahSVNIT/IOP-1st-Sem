#include <stdio.h>
#include <stdbool.h>

int main()
{
    char c;
    bool result;
    scanf("%c",&c);
    int d = c;
    result = (d>=97 && d<=122)? true : false;
    if (result)
        printf("yes");
    else 
        printf("no");
        
	return 0;
}

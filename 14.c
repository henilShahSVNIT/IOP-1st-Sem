#include <stdio.h>

int main()
{
    char c;
    scanf("%c",&c);
    int d = c;
    if(d >= 65 && d<=90)
        printf("the character is capital letter");
    else if(d>=97 && d<=122)
        printf("the character is small case letter");
    else if(d>=48 && d<=57)
        printf("the character is a digit");
    else
        printf("the character is a special symbol");
	return 0;
}

#include <stdio.h>
#include <stdbool.h>

int main()
{
	int n;
    scanf("%d",&n);
    bool p =true;
    for(int i = 2 ; i < n ; i++)
        if(n%i == 0)
        {
            p = false;
            break;
        }
    if(p==true)
        printf("YES");
    else
        printf("NO");
}
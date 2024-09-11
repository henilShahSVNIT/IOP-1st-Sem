#include <stdio.h>

int main()
{
	int n;
    scanf("%d",&n);
    int oddsum=0,evensum=0;
    for(int i=0;i<=n;i+=2)
        evensum+=i;
    for(int i=1;i<=n;i+=2)
        oddsum+=i;
    printf("%d is the sum of all odd numbers and %d is the sum of all even numbers",oddsum,evensum);
}
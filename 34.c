#include <stdio.h>

int main ()
{
	int n , i1 = 0 , i2 = 1 , i3;
	scanf("%d" , &n);
    //to print n numbers in fibonacci series
    printf("%d , %d ",i1,i2);
	for(int i = 0 ; i < n-2; i++)
    {
        i3 = i1 + i2;
        i1 = i2; 
        i2 = i3;
        printf(", %d ",i3); 
    }
	
	return 0;
}
#include <stdio.h>

int main()
{
	int n,t,s1,s2,s3,k;
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        s1=0;
        s2=1;
        s3=0;
        scanf("%d",&t);
        while(t >= s3)
        {
            k = 1;
            s3 = s1 + s2;
            //printf("%d ",s3);
            if(t == s3)
            {
                printf("IsFibo\n");
                k = 0;
                break;
            }
            s1 = s2;
            s2 = s3;
        }
        if(k == 1)
            printf("IsNotFibo\n");
    }
	return 0;
}
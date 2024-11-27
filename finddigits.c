#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int c=0;
        int temp = n;
        while(temp>0)
        {
            int d = temp%10;
            if(d != 0)
            {
                if(n%d==0)
                {
                    c++;
                }
            }
            temp=temp/10;
        }
        printf("%d\n",c);
    }
    return 0;
}

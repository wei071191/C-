#include <stdio.h>
int main()
{
    
    int i=2,n=-1,sum=0;
    
    do
    {
        scanf("%d",&n);
        if (n>0&&n%2==0)
        {
            do
            {
                sum=sum+i;
                i=i+2;
            } while (i<=n);
            printf("%d\n",sum);
        }
    } while (n<0&&n%2!=0);
    
    return 0;
}

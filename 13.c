#include <stdio.h>
int main()
{
    
    int n=-1,sum=0,i=2;
    
    while (n<0&&n%2!=0)
    {
        scanf("%d",&n);
        
        if (n>0&&n%2==0)
        {
            while (i<=n)
            {
                sum=sum+i;
                i=i+2;
            }
            printf("%d\n",sum);
        }
        
    }
    
    return 0;
}

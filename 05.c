#include <stdio.h>
int main()
{
    
    int i,sum=0;
    
    for (i=1; i<=100; i++)
    {
        if ((i%3==0)&&(i%8==0))
        {
            sum=sum+i;
        }
    }
    
    printf("%d\n",sum);
    
    return 0;
}

#include <stdio.h>
int main()
{
    
    int a,b,c,i,sum;
    
    for (i=100; i<=999; i++)
    {
        sum=0;
        
        a=i/100;
        b=(i-(a*100))/10;
        c=i-(a*100)-(b*10);
        
        sum=a*a*a+b*b*b+c*c*c;
        
        if (sum==i)
        {
            printf("%d ",i);
        }
        
    }
    
    printf("\n");
    
    return 0;
}

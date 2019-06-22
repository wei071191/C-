#include <stdio.h>
int main()
{
    
    int i=0,sum=0;
    
    do
    {
        sum=sum+i;
        i++;
    } while (sum<=1000);
    
    printf("%d\n",i-1);
    
    return 0;
}

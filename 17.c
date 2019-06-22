#include <stdio.h>
int main()
{
    
    int i=1,sum=0;
    
    while (i<=10)
    {
        printf("%d ",i*i);
        sum=sum+(i*i);
        i++;
    }
    
    printf("%d\n",sum);
    
    return 0;
}

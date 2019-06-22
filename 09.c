#include <stdio.h>
int main()
{
    
    int i,j,k=0,m=0,sum=0;
    
    for (i=1; i<=50; i++)
    {
        j=i*i;
        if (i%2==0)
        {
            k=k-j;
        }
        else
        {
            m=m+j;
        }
    }
    
    printf("%d\n",k+m);
    
    return 0;
}

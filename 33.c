#include <stdio.h>
int main()
{
    
    int n,i,j,k=0,m=1;
    
    scanf("%d",&n);
    
    while (m<n)
    {
        j=1;
        
        for (i=2; i<m; i++)
        {
            if (m%i==0)
            {
                j++;
            }
        }
        
        if (j==1&&m>k)
        {
            k=m;
        }
        
        m++;
    }
    
    printf("%d\n",k);
    
    return 0;
}

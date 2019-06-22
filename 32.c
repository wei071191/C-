#include <stdio.h>
int main()
{
    
    int i,n,j=1;
    
    scanf("%d",&n);
    
    for (i=2; i<n; i++)
    {
        if (n%i==0)
        {
            j++;
        }
    }
    if (j==1)
    {
        printf("此數是質數\n");
    }
    else
    {
        printf("此數不是質數\n");
    }
    
    return 0;
}

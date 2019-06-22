#include <stdio.h>
int main()
{
    
    int i=1,j,n;
    
    do
    {
        scanf("%d",&n);
        
        if (n>0&&n<51)
        {
            j=1;
            i++;
            
            do
            {
                printf("*");
                j++;
            } while (j<=n);
            printf("\n");
        }
    } while (i<=3);
    
    return 0;
}

#include <stdio.h>
int main()
{
    
    int i,j,k=5;
    
    for (i=1; i<=5; i++)
    {
        for (j=1; j<k; j++)
        {
            printf(" ");
        }
        for (j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
        k--;
    }
    
    return 0;
}

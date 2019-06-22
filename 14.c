#include <stdio.h>
int main()
{
    
    int i=1,j=3000;
    
    while (j>5)
    {
        
        j/=2;
        
        i++;
        
    }
    
    printf("%d\n",i);
    
    return 0;
}

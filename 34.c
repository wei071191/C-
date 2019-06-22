#include <stdio.h>
int main()
{
    
    int i=1;
    
    while (1)
    {
        if ((i%3==1)&&(i%5==3)&&(i%7==2))
        {
            printf("%d\n",i);
            break;
        }
        i++;
    }
    
    return 0;
}

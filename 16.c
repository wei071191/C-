#include <stdio.h>
#include <conio.h>
int main()
{
    
    char ch;
    
    while (ch!=17||ch!=3)
    {
        ch = getch();
        
        if (ch==17)
        {
            printf("您已按下Ctrl+q\n");
            break;
        }
        if (ch==3)
        {
            printf("您已按下Ctrl+c\n");
            break;
        }
        
        printf("%d\n",ch);
        
    }
    
    return 0;
}

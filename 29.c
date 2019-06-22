#include <stdio.h>
int main()
{
    
    int i=1,j;
    
    while (i<=3)
    {
        printf("請輸入密碼：");
        scanf("%d",&j);
        
        if (j==1234)
        {
            printf("密碼正確，歡迎使用本系統！！\n");
            break;
        }
        if (j!=1234&&i==3)
        {
            printf("密碼輸入超過三次！！\n");
        }
        i++;
    }
    
    return 0;
}

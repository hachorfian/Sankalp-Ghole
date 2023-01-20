#include<stdio.h>
int main()
{
    int p1,p2,p3;
    printf("enter three subject marks");
    scanf("%d%d%d",&p1,&p2,&p3);
    if(p1>45,p2>45,p3>45)
    {
        printf("pass");
    }
    else{
        printf("fail");
    }
    return 0;
}
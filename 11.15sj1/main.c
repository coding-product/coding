#include<stdio.h>
int pd(int n);
main()
{
    int a,p;
    printf("��������Ӧ�����");
    scanf("%d",&a);
    p=pd(a);
    if(p==1)
        printf("%d������",a);
    else
        printf("%d��������",a);
}
int pd(int a)
{
    int b;
    if(a%4==0&&a%100!=0)
        b=1;
    else if(a%100==0&&a%400==0)
        b=1;
        else
    b=0;
    return b;
}

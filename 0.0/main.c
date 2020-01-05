#include<stdio.h>
#include<string.h>
void f(char **p)
{
    char **q,**s,*t;
    for (q=p;q<p+4;q++)
    {
        for (s=q+1;s<p+5;s++)
        {
            if (strcmp(*q,*s)>0)
            {
                t=*q;
                *q=*s;
                *s=t;
            }
        }
    }
}
main()
{
    char *a[5],b[5][20],**p;
    int i;
    for (i=0;i<5;i++)
        a[i]=b[i];
    printf("请依次输入五个字符串:\n");
    for (i=0;i<5;i++)
        scanf("%s",a[i]);
    p=a;
    f(p);
    printf("排序后输出为:\n");
    for (i=0;i<5;i++)
    {
        printf("%s\n",a[i]);
    }
}

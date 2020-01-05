#include<stdio.h>
main()
{
    for(;;)
    {
        int a,b;
        printf("请按照如下规则依次输入2个数字:a,b\n");
        scanf("%d,%d",&a,&b);
        float c;
        c=a*a+b*b;
        if(c>100)
        {
            c=c/100;
            printf("%.4f\n",c);
        }
        else
        {
            c=a+b;
            printf("%.4f\n",c);

        }
    }
}

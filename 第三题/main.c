#include<stdio.h>
main()
{
    float a,b,c;
    for(;;)
    {
    printf("请输入工资数\n");
    scanf("%f",&a);
    if(a>=800)
    {
        c=a*1.2;
        b=a*0.2;
    }
    else if(a>=400)
    {
        c=a*1,15;
        b=a*0.15;
    }
    else if(a>=0)
    {
        c=a*1.1;
        b=a*0.1;
    }
    printf("原工资%f\n涨工资数%f\n最终工资%f\n\n",a,b,c);
    }
}

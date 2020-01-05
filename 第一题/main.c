#include<stdio.h>
main()
{
    for(;;)
    {
        printf("请依次输入长方形的长宽高：格式如1 2 3\n");
        float a,b,c;
        scanf("%f %f %f",&a,&b,&c);
        float s,v;
        s=2*(a*b+b*c+a*c);
        v=a*b*c;
        printf("表面积为:%8.3f\n体积为:%8.3f\n",s,v);
    }
}

#include<stdio.h>
#include<math.h>
float fun(int n);
main()
{
    int a;
    float s;
    printf("请输入想要算的个数");
    scanf("%d",&a);
    s=fun(a);
    printf("%f",s);
}
float fun(int n)
{
     int  a=1;
     float s=0,b,sum=0;
    for(a=1;a<=n;a++)
    {
        b=sqrt(a);
        s+=b;
        sum+=s;
    }
    return sum;
}

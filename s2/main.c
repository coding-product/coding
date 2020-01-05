#include<stdio.h>
main()
{
    int a,b,c,d,e;
    for(a=100;a<1000;a++)
    {
        e=a;
        b=e%10;
        e=e/10;
        c=e%10;
        e=e/10;
        d=e%10;
        if((b*b*b+c*c*c+d*d*d)==a)
            printf("%d\n",a);

    }
}

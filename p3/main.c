#include <stdio.h>
#include <stdlib.h>
main()
{
    int c,e;
    float a=1,b=2,d=0;
    for(e=1;e<=20;e++)
    {
        d+=b/a;
        c=a+b;
        a=b;
        b=c;
    }printf("%f",d);

}

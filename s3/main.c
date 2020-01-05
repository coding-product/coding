#include<stdio.h>
main()
{
    int a,b,c,d,e,f;
    for(a=1; a<1000; a++)
    {
        c=0;
        e=0;
        for(b=1; b<a; b++)
        {
            if(a%b==0)

                c+=b;

        }
        if(c==a)
        {
            printf("%d its factors are",a);
            e=c;
        }
//Êä³öÒò×Ó
        for(b=1; b<a; b++)
        {
            c=0;
            if(a%b==0)
            {
                for(f=1; f<a; f++)
                {
                    if(a%f==0)
                        c+=f;

                }
                if(c==e)
                    printf(" %d ",b);

            }
        }
    }
}

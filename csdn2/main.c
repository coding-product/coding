#include<stdio.h>
main()
{
    float a,b,c;
    scanf("%f,%f,",&a,&b);
    if(a<0)
        printf("�������");
    else
    {
        if(a<5000)
            printf("����Ϊ%f\n�۳���˰Ϊ0",a);
        if(a-5000>0)
        {
            if(a-5000<3000)
                b=(a-5000)*0.03;
            else if(a-5000<12000)
                b=(a-5000)*0.1;
            else if(a-5000<25000)
                b=(a-5000)*0.2;
            else if(a-5000<35000)
                b=(a-5000)*0.25;
            else if(a-5000<55000)
                b=(a-5000)*0.3;
            else if(a-5000<80000)
                b=(a-5000)*0.35;
            else
                b=(a-5000)*0.1;
            printf("����Ϊ%f\n�۳���˰Ϊ%f",a,b);

        }

    }
}

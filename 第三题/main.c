#include<stdio.h>
main()
{
    float a,b,c;
    for(;;)
    {
    printf("�����빤����\n");
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
    printf("ԭ����%f\n�ǹ�����%f\n���չ���%f\n\n",a,b,c);
    }
}

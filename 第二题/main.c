#include<stdio.h>
main()
{
    for(;;)
    {
        int a,b;
        printf("�밴�����¹�����������2������:a,b\n");
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

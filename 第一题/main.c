#include<stdio.h>
main()
{
    for(;;)
    {
        printf("���������볤���εĳ���ߣ���ʽ��1 2 3\n");
        float a,b,c;
        scanf("%f %f %f",&a,&b,&c);
        float s,v;
        s=2*(a*b+b*c+a*c);
        v=a*b*c;
        printf("�����Ϊ:%8.3f\n���Ϊ:%8.3f\n",s,v);
    }
}

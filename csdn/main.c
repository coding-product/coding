#include<stdio.h>
main()
{
    float a;
    scanf("%f",&a);
    if(a>100)
        printf("����һ���ٷ��Ƶĳ���");
    else if(a>=90)
        printf("a");
    else if(a>=80)
        printf("B");
    else if(a>=70)
        printf("C");
    else if(a>=60)
        printf("D");
    else
        printf("E");

}

#include<stdio.h>
main()
{
    int a,b,c,d,e,f,h,i,j,k,l,m;
    for(a=1; a<=4; a++)
    {
        for(b=0;b<4-a;b++)
            printf(" ");
        for(c=0; c<a*2-1; c++)
            printf("*");
        printf("\n");
    }
    for(d=1;d<=4;d++)
    {
        for(e=0;e<4-d;e++)
            printf(" ");
        for(f=0;f<d*2-1;f++)
            printf("*");
        printf("\n");
    }
    for(d=3;d>=1;d--)
    {
        for(e=0;e<4-d;e++)
            printf(" ");
        for(f=0;f<d*2-1;f++)
            printf("*");
        printf("\n");
    }
    for(h=1;h<5;h++)
    {
        for(i=0; i<4-h; i++)
            printf(" ");
        for(j=0;j<h;j++)
            printf("*");
        printf("\n");
    }
    for(h=3;h>=1;h--)
    {
        for(i=0;i<4-h;i++)
            printf(" ");
        for(j=0;j<h;j++)
            printf("*");
        printf("\n");
    }
    for(k=1;k<5;k++)
    {
        for(l=0;l<k;l++)
            printf("*");
        printf("\n");

    }
    for(k=4;k>1;k--)
    {
        for(l=1;l<k;l++)
            printf("*");
        printf("\n");
    }
}

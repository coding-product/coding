#include<stdio.h>
void f(char **q,int l)
{
    int i,j;
    char *p[5];
    int k[l],a[l],c[l],d;
    for(i=0;i<l;i++)
        c[i]=k[i]=(*(*(q+i)));
    for(i=0;i<5;i++)
    {
        for(j=i;j<5;j++)
        {
            if(c[i]>c[j])
            {
                d=c[i];
                c[i]=c[j];
                c[j]=d;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        j=0;
        while(c[i]!=k[j])
            j++;
            p[i]=*(q+j);
    }
    for(i=0;i<5;i++)
        *(q+i)=p[i];

}
main()
{
    int g=5;
    char *p[g];
    char **q=&p;
    char a[20],b[20],c[20],d[20],e[20];
    printf("请输入五个字符串");
    scanf("%s %s %s %s %s",a,b,c,d,e);
    p[0]=a;
    p[1]=b;
    p[2]=c;
    p[3]=d;
    p[4]=e;
    f(q,g);
    printf("%s\n%s\n%s\n%s\n%s\n",p[0],p[1],p[2],p[3],p[4]);

}


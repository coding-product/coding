#include<stdio.h>
#include<string.h>
struct client
{
    char name[20];
    char telephone[12];
};
void fun(struct client **q,int a)
{
    int i,j;
    struct client b[a],c;
    for(j=0;j<a;j++)
        b[j]=**(q+j);
    for(i=0;i<a;i++)
    {
        for(j=i;j<a-1;j++)
        if(strcmp(b[j].name,b[j+1].name)>0)
        {
            c=b[j+1];
            b[j+1]=b[i];
            b[i]=c;
        }
    }
    for(i=0;i<a;i++)
        **(q+i)=b[i];
}
main()
{
    int num,i;
    printf("请输入想要输入的客户个数");
    scanf("%d",&num);
    struct client *p[num];
    struct client **q=p;
    struct client a[num];
    for(i=0;i<num;i++)
    {
        printf("请输入客户的姓名");
        scanf("%s",&a[i].name);
        printf("请输入客户的电话");
        scanf("%s",&a[i].telephone);
        p[i]=a+i;
    }
    fun(q,num);
    for(i=0;i<num;i++)
        printf("客户姓名: %s 客户电话: %s ",p[i]->name,p[i]->telephone);
}

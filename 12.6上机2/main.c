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
    printf("��������Ҫ����Ŀͻ�����");
    scanf("%d",&num);
    struct client *p[num];
    struct client **q=p;
    struct client a[num];
    for(i=0;i<num;i++)
    {
        printf("������ͻ�������");
        scanf("%s",&a[i].name);
        printf("������ͻ��ĵ绰");
        scanf("%s",&a[i].telephone);
        p[i]=a+i;
    }
    fun(q,num);
    for(i=0;i<num;i++)
        printf("�ͻ�����: %s �ͻ��绰: %s ",p[i]->name,p[i]->telephone);
}

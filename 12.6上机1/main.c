#include<stdio.h>
struct student
{
    char name[20];
    float math;
    float ENG;
    float cyuyan;
    float average;
};
struct student fun(struct student a)
{
    float sum,average;
    sum=a.math+a.ENG+a.cyuyan;
    average=sum/3.0;
    a.average=average;
    return a;
}
main()
{
    int n,j;
    struct student Y;
    printf("请输入想要输入的学生个数");
    scanf("%d",&n);
    struct student a[n];
    for(j=0;j<n;j++)
    {
        scanf("%s",&a[j].name);
        scanf("%f,%f,%f",&a[j].math,&a[j].ENG,&a[j].cyuyan);
    }
    for(j=0;j<n;j++)
    {
        Y=fun(a[j]);
        printf("学生: %s 平均成绩: %f ",Y.name,Y.average);
    }
}

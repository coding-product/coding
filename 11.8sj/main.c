#include<stdio.h>
main()
{
    int x,a,b,c,i,j,e,f;
    printf("请选择数组类型\n1,整型数组\n2,实型数组\n3,字符数组\n");
    scanf("%d",&x);
    printf("请输入对应的数组是几行几列如a,b\n");
    scanf("%d,%d",&a,&b);
    int sz1[a][b],zh1[b][a];
    float sz2[a][b],zh2[b][a];
    char sz3[a][b],zh3[b][a];
    printf("请输入数组的各个元素\n");                          //确认数组类型
    fflush(stdin);
    if(x==1)
    {
        for(i=0; i<a; i++)
           for(j=0; j<b; j++)
                    scanf("%d",&sz1[i][j]);
    }
    else if(x==2)
    {
        for(i=0; i<a; i++)
            for(j=0; j<b; j++)
                scanf("%f",&sz2[i][j]);
    }
    else
        scanf("%s",sz3);
    //输入数组的各个元素
    switch(x)
    {
    case 1:
        for(i=0; i<a; i++)                                   //判断数组类型之后进入替换
            for(j=0; j<b; j++)
                zh1[j][b-a-i]=sz1[i][j];
        for(i=0; i<b; i++)
            for(j=0; j<a; j++)
               {
                printf("%d\t",zh1[i][j]);
                if(j==a-1) printf("\n");
               }
                for(i=0; i<a; i++)
            for(j=0; j<b; j++)
                printf("%d",sz1[i][j]);

        break;
    case 2:
        for(i=0; i<a; i++)                                   //判断数组类型之后进入替换
            for(j=0; j<b; j++)
                zh2[j][b-a-i]=sz2[i][j];
        for(i=0; i<b; i++)
            for(j=0; j<a; j++)
               {
                printf("%f\t",zh2[i][j]);
                if(j==a-1) printf("\n");
               }
                for(i=0; i<a; i++)
            for(j=0; j<b; j++)
                printf("%f",sz2[i][j]);
        break;
    case 3:
       for(i=0; i<a; i++)                                   //判断数组类型之后进入替换
            for(j=0; j<b; j++)
                zh3[j][b-a-i]=sz3[i][j];
        for(i=0; i<b; i++)
            for(j=0; j<a; j++)
               {
                printf("%c\t",zh3[i][j]);
                if(j==a-1) printf("\n");
               }
                for(i=0; i<a; i++)
            for(j=0; j<b; j++)
                printf("%c",sz3[i][j]);
        break;
    }
}

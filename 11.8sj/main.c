#include<stdio.h>
main()
{
    int x,a,b,c,i,j,e,f;
    printf("��ѡ����������\n1,��������\n2,ʵ������\n3,�ַ�����\n");
    scanf("%d",&x);
    printf("�������Ӧ�������Ǽ��м�����a,b\n");
    scanf("%d,%d",&a,&b);
    int sz1[a][b],zh1[b][a];
    float sz2[a][b],zh2[b][a];
    char sz3[a][b],zh3[b][a];
    printf("����������ĸ���Ԫ��\n");                          //ȷ����������
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
    //��������ĸ���Ԫ��
    switch(x)
    {
    case 1:
        for(i=0; i<a; i++)                                   //�ж���������֮������滻
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
        for(i=0; i<a; i++)                                   //�ж���������֮������滻
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
       for(i=0; i<a; i++)                                   //�ж���������֮������滻
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

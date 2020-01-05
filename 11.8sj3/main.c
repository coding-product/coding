#include<stdio.h>
main()
{
    int i,j=0;
    char str[30]={'\0'};
    scanf("%s",str);
    while(str[j++]!=0);
    for(i=j-1;i>=0;i--)
    {
        if(str[i]=='*'&&str[i-1]!='*')
        {
            str[i]='\0';
            break;
        }
    }
    printf("%s",str);
}

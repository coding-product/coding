#include<stdio.h>
main()
{
    char str[10]="abcdefg";
    int i,j=0,k,l,m,n,p;
    char o,b;
    scanf("%c",&b);
    while(str[j++]);
    for(i=0; i<j; i++)
    {
        l=str[i];
        if(b<=l)
        {
            k=i;
            break;
        }
        else k=i;
    }
    p=j;
    for(n=i; n<j; n++)
    {
        o=str[p-1];
        str[p]=str[p-1];
        str[p]=o;
        p--;
    }
    str[k]=b;
    printf("%s",str);
}

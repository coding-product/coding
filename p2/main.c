#include <stdio.h>
#include <stdlib.h>
main()
{
    int i,j,k,n,m,h[50];
    for(i=1; i<1000; i++)
    {
        k=0;
        n=0;
        for(j=1; j<i; j++)
        {
            if(i%j==0)
            {
                k+=j;
                h[n++]=j;
            }
        }
        if(i==k)
        {
            printf("%d",i);
            for(m=0; m<n; m++) printf(" %d ",h[m]);
            printf("\n");
        }

    }
}

#include<stdio.h>
double fun(double n);
double x=1.0,sum=1;
main()
{
    double a=1;
    a=fun(1)*2;
    printf("%f",fun(1)*2);

}
double fun(double n)
{
    if(x<0.0005)
        return sum;
    else
    {
        x*=n/(2*n+1);
        sum+=x;
        fun(++n);

    }
}

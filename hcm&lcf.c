#include<stdio.h>
int main()
{
    int x,y,a,b,t,gcd,lcm;
    printf("enter two integers\n");
    scanf("%d%d",&x,&y);

    a=x;
    b=y;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    gcd=a;
    lcm=(x*y)/gcd;
    printf("greatest common divisor of = %d\n",gcd);
    printf("least common multiple of = %d\n",lcm);
    return 0;
}

#include<stdio.h>
int main()
{
    int c,n,f=1;
    printf("enter the factorial number\n");
    scanf("%d",&n);

    for(c=1;c<=n;c++)
        f=f*c;
    printf("factorial of %d = %d",n,f);
    return 0;
}

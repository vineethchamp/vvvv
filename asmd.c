#include<stdio.h>
int main()
{
    int first,second,add,multiply,substract;
    float divide;
    printf("enter the values of first and second\n");
    scanf("%d%d",&first,&second);

    add = first + second;
    substract = first - second;
    multiply = first * second;
    divide = (float)first/second;

    printf("add=%d\n",add);
    printf("substract=%d\n",substract);
    printf("multiply=%d\n",multiply);
    printf("divide=%.2f\n",divide);
    return 0;
}

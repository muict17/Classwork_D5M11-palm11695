#include <stdio.h>
int Fibonacci(int n, int a, int b)
{
    if(n==a)
    {
        printf("%d ",a);
        return 0;
    }
    printf("%d ",a);
    Fibonacci(n,b,a+b);
    return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    Fibonacci(n,0,1);
    return 0;
}
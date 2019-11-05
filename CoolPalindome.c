#include <stdio.h>
int Palindome(int n,int inverse_n)
{
    while(n!=0)
    {
       inverse_n *= 10;
       inverse_n += n%10;
       n /= 10;
       Palindome(n,inverse_n); 
    }
    return inverse_n;
}

int main()
{
    int n;
    scanf("%d",&n);
    if(n==Palindome(n,0))
    {
        printf("Palindome\n");
    }
    else
    {
        printf("Not palindome\n");
    }
    return 0;
}
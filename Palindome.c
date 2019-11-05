#include <stdio.h>
int Power(int num, int pwr)
{
    int n=1;
    if(pwr == 0)
    {
        n=1;
    }
    else
    {
        for(int i=0; i<pwr; i++)
        {
            n *= num;
        }
    }
    return n;
    
}
int Palindome(int n, int i, int end)
{
    if(end < 0)
    {
        printf("Palindome\n");
        return 0;
    }
    if((n/Power(10,i))%10 == (n/Power(10,end)%10))
    {
        Palindome(n,i+1,end-1);
    }
    else
    {
        printf("Not Palindome\n");
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n,count=0;
    while(temp > 9)
    {
        temp/=10;
        count++;
    }
    Palindome(n,0,count);
    return 0;
}
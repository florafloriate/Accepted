#include<stdio.h>
int main()
{
    long long t,x,y,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&x,&y);
        n=x-y;
        if(n>1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

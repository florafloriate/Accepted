#include<stdio.h>
#include<string.h>
int main()
{
    int n,sz;
    char str[101];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s", str);
        sz=strlen(str);
        if(sz>10)
        {
            printf("%c%d%c\n",str[0],sz-2,str[sz-1]);
        }
        else
            printf("%s\n", str);
    }
    return 0;
}

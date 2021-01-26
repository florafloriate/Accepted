#include<stdio.h>
#include<string.h>

int main()
{
    char a[105], b[105];
    scanf("%s%s",a,b);

    int i, n=strlen(a), p=0;

    for(i=0; i<n; i++)
    {
        if(a[i]!=b[n-1-i])
            p++;
    }

    if(p!=0)
        printf("NO\n");
    else
        printf("YES\n");
}

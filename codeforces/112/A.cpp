#include<stdio.h>
#include<string.h>
int main()
{
    char st1[101],st2[101];
    scanf("%s", st1);
    scanf("%s", st2);
    int sz,i,m=0;

    sz=strlen(st1);

    for(i=0;i<sz;i++)
    {
        if(st1[i]>='A'&&st1[i]<='Z')
        {
            st1[i]=st1[i]+32;
        }

        if(st2[i]>='A'&&st2[i]<='Z')
        {
            st2[i]=st2[i]+32;
        }

        if(st1[i]!=st2[i])
        {
            if(st1[i]<st2[i])
                {printf("-1\n");m++;break;}
            else if(st1[i]>st2[i])
                {printf("1\n");m++;break;}

        }
    }
    if(m==0)
        printf("0\n");
    return 0;
}

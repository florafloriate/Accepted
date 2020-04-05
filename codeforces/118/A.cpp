#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    scanf("%s", str);
    int sz,i;

    sz=strlen(str);

    for(i=0;i<sz;i++)
    {
        if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='y'&&str[i]!='Y'&&
           str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U')
        {
            if(str[i]>='a'&&str[i]<='z')
            {
                printf(".%c",str[i]);
            }
            else if(str[i]>='A'&&str[i]<='Z')
            {
                printf(".%c",str[i]+32);
            }
        }
    }
    printf("\n");
    return 0;
}

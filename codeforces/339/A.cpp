#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,sz,asc;
    char str[101];
    scanf("%s", str);

    sz=strlen(str);
    for(i=0;i<sz;i=i+2)
    {
        for(j=i+2;j<sz;j=j+2)
        {
            if(str[i]>str[j])
            {
                asc=str[i];
                str[i]=str[j];
                str[j]=asc;
            }
        }
    }
    printf("%s\n", str);
    return 0;
}

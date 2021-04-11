#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        char a[n+5][n+5];
        int p=1,pr1,pc1,pr2,pc2;

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='*' && p==1)
                {
                    pr1=i; pc1=j;
                    p++;
                }
                else if(a[i][j]=='*' && p==2)
                {
                    pr2=i; pc2=j;
                    p++;
                }
            }
        }

        if(pr1==pr2)
        {
            if(pr1<n)
            {
                a[n][pc1]='*';
                a[n][pc2]='*';
            }
            else
            {
                a[1][pc1]='*';
                a[1][pc2]='*';
            }
        }
        else if(pc1==pc2)
        {
            if(pc1<n)
            {
                a[pr1][n]='*';
                a[pr2][n]='*';
            }
            else
            {
                a[pr1][1]='*';
                a[pr2][1]='*';
            }
        }
        else
        {
            a[pr1][pc2]='*';
            a[pr2][pc1]='*';
        }

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
}

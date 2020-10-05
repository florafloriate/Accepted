#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        ll a[n+5][m+5];

        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                cin>>a[i][j];

        ll a1[3], ans=0;
        int p,q;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                p=abs(m-j-1);
                q=abs(n-i-1);

                a1[0]=a[i][j];
                a1[1]=a[i][p];
                a1[2]=a[q][j];

                sort(a1,a1+3);

                ans+=abs(a1[1]-a1[0]);
                ans+=abs(a1[1]-a1[2]);

                a[i][j]=a[i][p]=a[q][j]=a1[1];
            }
        }
        cout<<ans<<endl;

    }

}

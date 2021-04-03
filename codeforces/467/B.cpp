#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,m,k,c,ans=0;
    cin>>n>>m>>k;

    int a[m+5];
    for(int i=0; i<=m; i++)
        cin>>a[i];

    for(int i=0; i<m; i++)
    {
        c=0;
        int x=a[i]^a[m];
        while(x>0)
        {
            if(x%2==1)
                c++;
            x/=2;
        }
        if(c<=k)
            ans++;
    }

    cout<<ans<<endl;

    return 0;
}

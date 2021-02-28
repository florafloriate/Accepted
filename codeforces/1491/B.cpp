#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,u,v;
        cin>>n>>u>>v;
        ll a[n+5];
        for(int i=0; i<n; i++)
            cin>>a[i];

        int w1,w2,w,ans=INT_MAX;
        for(int i=0; i<n-1; i++)
        {
            if(a[i]==a[i+1])
            {
                w1=v+v;
                w2=v+u;
                w=min(w1,w2);
            }
            else if(a[i]+1==a[i+1] || a[i]-1==a[i+1])
            {
                w1=u;
                w2=v;
                w=min(w1,w2);
            }
            else
            {
                w=0;
            }

            ans=min(ans,w);
        }

        cout<<ans<<endl;
    }
}

#include<bits/stdc++.h>
#define mod              1000000007
#define INF              1e9
#define pi               acos(-1)
#define ll               long long
#define endl             "\n"
#define F                first
#define S                second
#define bug(x)           cout<<x<<"*"<<endl;
#define mem(name,value)  memset(name, value, sizeof(name))
#define decimal(x)       fixed<<setprecision(x)
#define fastio           ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

int main()
{
    fastio;

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;

        int a[n+2];
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }

        int mx=INT_MIN,v;
        for(auto it : mp)
        {
            if(mx<it.second)
            {
                v=it.first;
                mx=it.second;
            }
        }

        int cng=n-mx;
        int ans=cng;
        int copi=mx;
        int cx=mx;

        while(1)
        {
            if(copi<n)
                ans++;
            copi=copi*2;

            if(copi>=n)
                break;
        }

        cout<<ans<<endl;
    }
}

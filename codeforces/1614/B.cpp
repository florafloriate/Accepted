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
        vector<pair<int,int>> v;
        vector<pair<int,int>> w;
        ll a[n+5];
        ll b[n+5];
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            v.push_back({b[i],i});
        }

        sort(v.rbegin(),v.rend());
        int c=1,m=n;
        if(n%2==1)
            m--;
        for(int i=0; i<m; i+=2)
        {
            //cout<<i<<" * "<<c<<endl;
            w.push_back({v[i].second,c});
            w.push_back({v[i+1].second,-c});
            c++;
        }
        if(n%2==1)
            w.push_back({v[n-1].second,c});

        sort(w.begin(),w.end());
        ll ans=0;
        for(int i=0; i<n; i++)
        {
            ans=ans+2*abs(w[i].second)*b[i];
        }

        cout<<ans<<endl;
        cout<<"0 ";
        for(int i=0; i<n; i++)
        {
            cout<<w[i].second<<" ";
        }cout<<endl;


    }
}

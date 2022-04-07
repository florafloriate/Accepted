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
        int n,k; cin>>n>>k;
        set<int> s;
        for(int i=0; i<n; i++)
        {
            int x; cin>>x;
            s.insert(x);
        }

        bool ans=false;
        for(auto it : s)
        {
            int v=it-k;
            if(s.find(v)!=s.end())
                ans=true;
        }

        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}

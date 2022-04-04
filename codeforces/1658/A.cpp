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
        string s; cin>>s;

        vector<int>vc;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                vc.push_back(i);
            }
        }

        int sz=vc.size();
        if(sz==1)
        {
            cout<<"0"<<endl; continue;
        }

        int ans=0;
        for(int i=1; i<sz; i++)
        {
            if(vc[i]-vc[i-1]<3)
            {
                ans+=(2-(vc[i]-vc[i-1]-1));
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}

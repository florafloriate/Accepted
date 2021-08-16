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
        string a,b; cin>>a>>b;
        int n=a.size(),m=b.size(),p,cnt,mx=0;

        vector<pair<string,int>> ss,tt;
        for(int i=0; i<n; i++)
        {
            string test;
            for(int j=i; j<n; j++)
            {
                test+=a[j];
                ss.push_back(make_pair(test,test.size()));
            }
        }

        for(int i=0; i<m; i++)
        {
            string test;
            for(int j=i; j<m; j++)
            {
                test+=b[j];
                tt.push_back(make_pair(test,test.size()));
            }
        }

        for(auto x : ss)
        {
            for(auto y : tt)
            {
                if(x.F == y.F)
                    mx=max(mx,x.S);
            }
        }

        cout<<n+m-2*mx<<endl;
    }
}

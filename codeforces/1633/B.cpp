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
        string s; cin>>s;
        int n=s.size();

        int z=0,o=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
                z++;
            else
                o++;
        }

        if(z>o || z<o)
            cout<<min(z,o)<<endl;
        else
        {
            cout<<o-1<<endl;
        }
    }
}

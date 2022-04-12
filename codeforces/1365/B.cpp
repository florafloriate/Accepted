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

int n;
vector<vector<ll>> v(200005);

int main()
{
    fastio;

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n+2];
        int b[n+2];
        int one=0;
        int zero=0;

        for(int i=0; i<n; i++)
            cin>>a[i];

        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            if(b[i]==0)
                zero=1;
            else
                one=1;
        }

        bool f=true;
        if(one==0 || zero==0)
        {
            for(int i=1; i<n; i++)
            {
                if(a[i]-a[i-1]<0)
                    f=false;
            }
        }

        if(f)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}

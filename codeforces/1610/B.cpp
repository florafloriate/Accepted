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

    vector<int> vc;
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n+5];
        for(int i=0; i<n; i++)
            cin>>a[i];

        int f,l,ok=1;
        for(int i=0; i<n; i++)
        {
            if(a[i]!=a[n-i-1])
            {
                f=a[i];
                l=a[n-i-1];
                ok=0;
            }
        }

        if(ok==1)
        {
            cout<<"YES"<<endl;
            continue;
        }

        for(int i=0; i<n; i++)
        {
            if(a[i]!=f)
                vc.push_back(a[i]);
        }

        int sz=vc.size();
        ok=1;
        for(int i=0; i<sz; i++)
        {
            //cout<<vc[i]<<" "<<vc[sz-i+1]<<endl;
            if(vc[i]!=vc[sz-i-1])
                ok=0;
        }

        vc.clear();

        if(ok==1)
        {
            cout<<"YES"<<endl;
            continue;
        }

        for(int i=0; i<n; i++)
        {
            if(a[i]!=l)
                vc.push_back(a[i]);
        }

        sz=vc.size();
        ok=1;

        for(int i=0; i<sz; i++)
        {
            //cout<<vc[i]<<" "<<vc[sz-i+1]<<endl;
            if(vc[i]!=vc[sz-i-1])
                ok=0;
        }

        if(ok==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

        vc.clear();
    }

}

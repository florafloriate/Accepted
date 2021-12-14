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
        int a[n+5];

        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);
        int scr=0;
        int x=n-(2*k);

        for(int i=0; i<x; i++)
        {
            scr+=a[i];
        }

        int p=x+k;
        for(int i=x; i<=x+k && i<n; i++)
        {
            if(a[i]==a[p])
                scr++;
            p++;
        }

        cout<<scr<<endl;
    }
}

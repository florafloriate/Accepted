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
        int a[n+5];
        int mn=INT_MAX, mx=INT_MIN;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mn=min(mn,a[i]);
            mx=max(mx,a[i]);
        }

        int b,c;
        for(int i=0; i<n; i++)
        {
            if(a[i]==mn)c=i;
            if(a[i]==mx)b=i;
        }

        cout<<c+1<<" "<<b+1<<endl;
    }

}
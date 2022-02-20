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
        ll n; cin>>n;
        ll a[n+5];
        ll b[n+5];
        for(int i=0; i<n; i++)
        {
            cin>>a[i]; b[i]=a[i];
        }

        int p=0,q=0;
        for(int i=1; i<n-1; i++)
        {
            if(a[i-1]<a[i] && a[i]>a[i+1])
            {
                if(i+2<n && a[i+2]>=a[i])
                    a[i+1]=a[i+2];
                else
                    a[i+1]=a[i];
                p++;
            }
        }


        cout<<p<<endl;
        for(int i=0; i<n; i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
}

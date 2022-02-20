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

        sort(b,b+n);

        if(is_sorted(a,a+n))
            cout<<"0"<<endl;
        else
        {
            if(a[n-2]>a[n-1])
                cout<<"-1"<<endl;
            else if(a[n-1]>=0)
            {
                cout<<n-2<<endl;
                for(int i=0; i<n-2; i++)
                {
                    cout<<i+1<<" "<<n-1<<" "<<n<<endl;
                }
            }
            else
                cout<<"-1"<<endl;
        }
    }
}

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

        if(n%2==0)
        {
            n=n/2;

            ll ans=1;
            for(int i=1; i<=n; i++)
            {
                ans=ans*i;
                ans=ans%998244353;
            }

            cout<< (ans*ans)%998244353 <<endl;
        }
        else
            cout<<"0"<<endl;
    }
}

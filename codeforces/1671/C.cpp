#include<bits/stdc++.h>
#define mod              1000000007
#define INF              1e9
#define pi               acos(-1)
#define ll               long long
#define endl             "\n"
#define F                first
#define S                second
#define LL_INF           1LL<<62
#define Checkbit(x, k)   (x & (1LL << k)) ///whether the k-th bit of x is zero or not
#define mem(name,value)  memset(name, value, sizeof(name))
#define binary(x)        bitset<31>(x)
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
        ll x; cin>>x;
        ll a[n+5];
        for(int i=1; i<=n; i++)
            cin>>a[i];
        sort(a+1,a+n+1);

        ll presum[n+5];
        presum[1]=a[1];
        for(int i=2; i<=n; i++)
            presum[i]=presum[i-1]+a[i];

        ll answer=0;
        ll Day=0;
        for(int i=n; i>=1; i--)
        {
            presum[i]+=(i*Day);
            if(presum[i]>x)
                continue;

            ll extra=x-presum[i];
            ll extraDay=extra/i;
            answer+=(i+(extraDay*i));
            Day+=(1+extraDay);
            //cout<<"* "<<answer<<endl;
        }

        cout<<answer<<endl;
    }
}

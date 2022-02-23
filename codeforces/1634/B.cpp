#include <bits/stdc++.h>
 
using namespace std;
 
#define ll              long long
#define l1(i, n)        for (ll i = 1; i <= n; i++)
#define l0(i, n)        for (ll i = 0; i < n; i++)
#define lo(i, s, n)     for (ll i = s; i <= n; i++)
#define sca(n)          scanf("%lld", &n)
#define pri(n)          printf("%lld", n)
#define pb              push_back
#define mp              make_pair
#define sorted(x)       sort(x.begin(), x.end())
#define reversed(x)     reverse(x.begin(), x.end())
#define all(x)          x.begin(), x.end()
#define ms(a, b)        memset(a, b, sizeof(a));
#define cases(tc)       cout<<"Case "<<tc<<": "
#define nl              cout<<"\n";
#define pnl             printf("\n");
#define pi              acos(-1)
#define mod             1000000007
#define inf             999999999999999999
#define maxn            100001
			
 
 
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n, x, y;
        cin>>n>>x>>y;
        vector <ll> v(n);
        l0(i, n) cin>>v[i];
        ll sum=0;
        l0(i, n) sum+=v[i];
        x+=sum;

        if(x%2==0 && y%2==0) cout<<"Alice";
        else if(x%2==1 && y%2==1) cout<<"Alice";
        else cout<<"Bob";
        nl
    }
    return 0;
}
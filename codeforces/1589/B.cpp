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
        int n,m; cin>>n>>m;
        int x=min(n,m);
        int y=max(n,m);

        int ans;

        if(x%3==0)
        {
            ans=y*(x/3);
        }
        else if(y%3==0)
        {
            ans=x*(y/3);
        }
        else
        {
            int ans1,ans2,ans3,ans4;

            ans1=y*(x/3);
            ans1=min(ans1+y, ans1+ (x%3)*(y/3) + min(x%3,y%3) );

            ans2=x*(y/3);
            ans2=min(ans2+x, ans2+ (y%3)*(x/3) + min(x%3,y%3) );

            ans=min(ans1,ans2);
        }

        cout<<ans<<endl;
    }
}

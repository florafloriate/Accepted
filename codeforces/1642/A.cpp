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
        pair<ll,ll> a[10];

        for(int i=0; i<3;i++)
			cin>>a[i].second>>a[i].first;

		sort(a,a+3);

		int ok=1;
		for(int i=1;i<3;i++)
        {
			if(a[i].first==a[i+1].first && a[i].first!=0)
			{
				cout<<abs(a[i].second-a[i+1].second)<<endl;
				ok=0;
				break;
			}
		}

		if(ok)
            cout<<"0"<<endl;
    }
}

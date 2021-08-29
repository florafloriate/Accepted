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
    for(int tc=1; tc<=t; tc++)
    {
        ll c,d; cin>>c>>d;

        if(c==d)
        {
            if(c==0)
                cout<<"0"<<endl;
            else
                cout<<"1"<<endl;
        }
        else
        {
            if(abs(c-d)%2==0)
                cout<<"2"<<endl;
            else
                cout<<"-1"<<endl;
        }

    }
}

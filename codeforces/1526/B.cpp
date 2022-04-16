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
        ll x; cin>>x;
        ll d=x/11;

        bool f=false;
        for(int i=0; i<d+5; i++)
        {
            if(i*111>x)
                break;
            if( (x-i*111)%11 == 0 )
            {
                f=true;
                break;
            }
        }

        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}

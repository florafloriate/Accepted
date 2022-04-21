#include<bits/stdc++.h>
#define mod              1000000007
#define INF              1e9
#define pi               acos(-1)
#define ll               long long
#define endl             "\n"
#define F                first
#define S                second
#define bug(x)           cout<<x<<"*"<<endl;
#define LL_INF           1LL<<62
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
        if(n<=1399)
            cout<<"Division 4"<<endl;
        else if(n>=1400 && n<=1599)
            cout<<"Division 3"<<endl;
        else if(n>=1600 && n<=1899)
            cout<<"Division 2"<<endl;
        else
            cout<<"Division 1"<<endl;
    }
}

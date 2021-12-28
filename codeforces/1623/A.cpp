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
        int n,m,r,c,a,b;
        cin>>n>>m>>r>>c>>a>>b;

        int ansr,ansc;

        if(r>a)
            ansr=n-a+n-r;
        else
            ansr=a-r;

        if(c>b)
            ansc=m-b+m-c;
        else
            ansc=b-c;

        cout<<min(ansr,ansc)<<endl;

    }
}

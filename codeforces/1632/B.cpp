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
    //fastio;

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        n--;
        int a=floor( log2(n) );

        int sum=1,m=1;
        for(int i=1; i<a; i++)
        {
            m=m*2;
            sum=sum+m;
        }

        for(int i=1; i<=sum; i++)
            cout<<i<<" ";
        cout<<"0 ";
        for(int i=sum+1; i<=n; i++)
            cout<<i<<" ";
        cout<<endl;

    }
}

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
        int n,r,b; cin>>n>>r>>b;

        int B=b+1;
        int d=(r/B);
        int D=0;
        int R=0;

        if(r%B>0)
        {
            D=d+1;
            R=r%B;
        }

        string aa="",bb="B",cc="",ans="";

        for(int i=1; i<=d; i++)
            aa=aa+"R";

        for(int i=1; i<=D; i++)
            cc=cc+"R";

        for(int i=1; i<=R; i++)
        {
            ans=ans+cc+bb;
        }

        int N=B-R;

        for(int i=1; i<N; i++)
        {
            ans=ans+aa+bb;
        }

        ans=ans+aa;

        cout<<ans<<endl;
    }
}
